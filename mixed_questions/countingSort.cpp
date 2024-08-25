#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

vector<int> sort(int n, vector<int> &arr)
{
    int max = INT_MIN;
   for (int i = 0; i < n; i++)
   {  
        if (arr[i] > max)
        {
            max = arr[i];
        }
   }

   vector<int> countSortArray; 
   for (int i = 0; i < max; i++)
   {
        countSortArray[i] = 0;

   }
   
   
   
}

int main(){
    vector<int> array = {4,3,0,1,6};

}