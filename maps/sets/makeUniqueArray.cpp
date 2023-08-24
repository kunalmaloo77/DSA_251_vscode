#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
int minElementsToRemove(vector<int> &arr)
{
    unordered_map<int,bool> map;
    int count = 0;
    for(int i = 0 ; i < arr.size(); i++){
        if(map[arr[i]] == true){
            count++;
        }
        else{
            map[arr[i]] = true;
        }
    }
    return count;
}

int main(){
    vector<int> array = {1,2,3,1,2};
    cout << minElementsToRemove(array);
    return 0;
}