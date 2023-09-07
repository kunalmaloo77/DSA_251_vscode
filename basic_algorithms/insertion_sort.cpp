#include<iostream>
#include<vector>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    for (int i = 0; i < n-1; i++)
    {
        int key = arr[i+1];
        for (int j = i; j >= 0; j--)
        {            
            if (key < arr[j])
            {
                arr[j+1] = arr[j];
                arr[j] = key;
            }
            else
            {
                break;
            }
            
            
        }
        
    }
    
}
int main(){
    vector<int> arr = {4,6,2,9,7};
    insertionSort(arr.size(),arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}