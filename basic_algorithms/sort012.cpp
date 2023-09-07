#include<iostream>
using namespace std;

void sort012(int *arr, int n)
{
   int count0 =0;
   int count1 =0;
   int count2 =0;

   for(int i = 0; i < n; i++){
       switch(arr[i]){
           case 0: count0++;
           break;
           case 1: count1++;
           break;
           case 2: count2++;
           break;
       }
   }
   for(int i = 0; i < count0; i++){
       arr[i] = 0;
   }
   for(int i = count0; i < count1+count0; i++){
       arr[i] = 1;
   }
   for(int i = count1+count0; i < count2+count1+count0; i++){
       arr[i] = 2;
   }
}

int main(){
    int arr[] = { 2, 2, 2, 1, 1, 2, 1, 1, 2};
    sort012(arr,sizeof(arr)/4);
    for (int i = 0; i < sizeof(arr)/4; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}