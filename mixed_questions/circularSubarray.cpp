/*
You have been given a circular array/list ‘ARR’ containing ‘N’ integers. You have to find out the maximum possible sum of a non-empty subarray of ‘ARR’.

A circular array is an array/list in which the end of the array connects to the beginning of the array.

A subarray may only include each element of the fixed buffer of ‘ARR’ at most once. (Formally, for a subarray ‘ARR[i]’, ‘ARR[i+1]’, ..., ‘ARR[j]’, there does not exist ‘i’ <= ‘k1’, ‘k2’ <= ‘j’ with ‘k1’ % ‘N’ = k2 % ‘N’.)

For Example:

The ‘ARR’ = [1, 2, -3, -4, 5], the subarray [5, 1, 2] has the maximum possible sum which is 8. This is possible as 5 is connected to 1 because ‘ARR’ is a circular array.
*/

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int maxSubarraySum(vector<int> &arr, int n) {
    int sum = 0;
    int max_s = 0;
    int min_s = 0;
    int maxSum = INT_MIN;
    int minSum = INT_MAX;
	for (size_t i = 0; i < n; i++)
    {
        sum+=arr[i];
        max_s+=arr[i];
        maxSum = max(max_s,maxSum);
        if (sum < 0)
        {
            sum = 0; 
        }
        
        min_s+=arr[i];
        minSum = min(min_s,minSum);
        if (sum > 0)
        {
            sum = 0;
        }
    }
    if (sum == minSum)
    {
        return maxSum;
    }
    return max(maxSum,sum,minSum);
    
}

int main()
{
    vector<int> arr = {1,3,-3,2};
    int n = arr.size();
    cout << maxSubarraySum(arr, n);
    return 0;
}