#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    for (int i = 0; i < n; i++)
    {
        int currentMin = arr[i];
        int currentMinIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < currentMin)
            {
                currentMin = arr[j];
                currentMinIndex = j;
            }
            
        }
        arr[currentMinIndex] = arr[i];
        arr[i] = currentMin;
    }
    
}
int main(){
    vector<int> arr = {4,6,2,9,7};
    selectionSort(arr,arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}