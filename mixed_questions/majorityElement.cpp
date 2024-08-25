#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


vector<int> majorityElementII(vector<int> &arr)
{
    unordered_map<int,int> map;
    vector<int> majorityArray;
    int n = arr.size();
    for (int i = 0; i < n; i++){
        map[arr[i]]++;
        
    }
    for (int i = 0; i < n; i++)
    {
        if (map[arr[i]] > n/3)
        {
            majorityArray.push_back(arr[i]);
            map[arr[i]] = -1;
        }   
    }
    
    return majorityArray;
}

int main(){
    vector<int> array = {6, 6, 6, 7};
    
    vector<int> majorityArray;
   
    majorityArray = majorityElementII(array);
    for (int i = 0; i < majorityArray.size(); i++)
    {
        cout << majorityArray.at(i) << " ";
    }
    
    return 0;
}