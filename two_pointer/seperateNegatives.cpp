#include<iostream>
#include<vector>
using namespace std;
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int n = nums.size();
    int leftP = 0;
    int rightP = n-1;
    while (leftP < rightP)
    {
        if (nums[leftP] < 0 && nums[rightP] < 0)
        {
            leftP++;
        }
        else if (nums[leftP] >= 0 && nums[rightP] < 0)
        {
            int temp = nums[leftP];
            nums[leftP] = nums[rightP];
            nums[rightP] = temp;
            rightP--;
        }
        else if (nums[leftP] < 0 && nums[rightP] >= 0)
        {
            rightP--;
        }
        else{
            rightP--;
        }
    }
    return nums;
    
}
int main(){
    vector<int> arr = {-16 ,9 ,-25, 8, 44, 20, 20, -12, 11, -44 ,-32, 7, 41, 13, 7, 27, -49, -19, -43, 6 };
    arr = separateNegativeAndPositive(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}