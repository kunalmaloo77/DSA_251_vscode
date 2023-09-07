#include<iostream>
#include<vector>
using namespace std;

long long maxSubarraySum(vector<int> arr, int n)
{
       long long max = INT_MIN;
       long long sum = 0;
       
       for (int i = 0; i < n; i++) {
           sum += arr[i];
           if (sum > max)
            max = sum;
           if (sum < 0)
            sum = 0;
       }
       if(max < 0)
       return 0;
       return max;
   
}

int main(){
    vector<int> arr = {18, -6, -6, -5, 7, 10, 16, -6, -2, 0 };
    cout << maxSubarraySum(arr,arr.size());
    return 0;
}