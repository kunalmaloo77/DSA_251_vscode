#include<iostream>
#include<vector>
using namespace std;

// int findEquilibriumIndex(vector<int> &arr) {
//     for(int i = 0; i < arr.size(); i++){
//         int lsum =0;
//         int rsum =0;
//         for(int j = 0; j < i; j++){
//             lsum = lsum + arr[j];
//         }
//         for(int k = i+1; k < arr.size(); k++){
//             rsum = rsum + arr[k];
//         }
//         if(lsum == rsum){
//             return i;
//         }
//     }
//     return -1;
// }

int findEquilibriumIndex(vector<int> &arr) {
    int rsum = 0;
    for(int i = 0; i < arr.size(); i++){
        rsum = rsum + arr[i];
    }
    int lsum =0;
    for(int i = 0; i < arr.size(); i++){

        if(i>0){
        lsum = lsum + arr[i-1];
        }
        rsum = rsum - arr[i];

        if(lsum == rsum){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr{1, 7, 3, 6, 5, 6};
    cout << findEquilibriumIndex(arr);
    return 0;
}