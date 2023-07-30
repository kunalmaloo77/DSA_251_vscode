#include<iostream>
using namespace std;
bool isPossible(int *arr, int n)
{
    int count = 0; // Count of elements to be changed

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
            if (count > 1)
                return false; // If more than one element needs to be changed, it's not possible
            if (i > 1 && arr[i - 2] > arr[i]) // If changing arr[i] is not enough, try changing arr[i-1]
                arr[i] = arr[i - 1];
            else // Otherwise, change arr[i]
                arr[i - 1] = arr[i];
        }
    }

    return true;
}
int main(){
    int arr[] = {-10,10,0,10,11};
    if (isPossible(arr,5))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}