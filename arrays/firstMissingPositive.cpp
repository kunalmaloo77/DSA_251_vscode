#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

//with sort
int firstMissing(int arr[], int n)
{
    sort(arr,arr+n);
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            if (arr[i] != j)
            {
                return j;
            }
            else{
                j++;
            }
            
        }
        
    }
    return j;
}


//without sort
int firstMissing(int arr[], int n)
{
    unordered_map<int,bool> map;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            map[arr[i]] = true;
        }
        
    }
    int j;
    for (j = 1; j < n+1; j++)
    {
        if (map[j] == false)
        {
            return j;
        }
        
    }
    return j;
    
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int a = firstMissing(arr,11);
    cout << a;
    return 0;
}