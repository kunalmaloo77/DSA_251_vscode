#include <iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
    vector<int> arr{1,6,3,8,2,9,12,56,9};
    int k = 6;
    queue<int> q;
    for(int i = 0; i < k;i++){
        q.push(arr[i]);
    }
    for(int i = k; i < arr.size();i++){
        arr[i-k] = arr[i];
    }
    for(int i = arr.size()-k;i < arr.size();i++){
        int a = q.front();
        arr[i] = a;
        q.pop();
    }
    for(int i = 0; i < arr.size(); i++){
        cout << arr.at(i) << " ";
    }

    return 0;
}