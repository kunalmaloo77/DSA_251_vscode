#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {-20 ,-30 ,40, 25, 10};
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for(int i =0; i < arr.size(); i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > secondMax && arr[i] < max){
            secondMax = arr[i];
        }
    }
    cout << secondMax;
    return 0;
}