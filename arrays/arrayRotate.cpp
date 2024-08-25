#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution
{
public:
    // reverse array
    vector<int> reverseArray(vector<int> &nums, int s, int e)
    {
        for (int i = s; i < (e+s)/2; i++)
        {
            int temp = nums[i];
            nums[i] = nums[e-1 - i+s];
            nums[e-1 - i+s] = temp;
        }
        return nums;
    }

    void rotateRight(vector<int> &nums, int k)
    {
        k = k % nums.size();

        nums = reverseArray(nums, 0, nums.size());

        nums = reverseArray(nums, 0, k);

        nums = reverseArray(nums, k, nums.size());
    }

    void rotateLeft(vector<int> &nums, int k)
    {
        queue<int> q;
        for (int i = 0; i < k; i++)
        {
            q.push(nums[i]);
        }
        for (int i = k; i < nums.size(); i++)
        {
            nums[i - k] = nums[i];
        }
        for (int i = nums.size() - k; i < nums.size(); i++)
        {
            int a = q.front();
            nums[i] = a;
            q.pop();
        }
    }
};

int main()
{
    vector<int> arr{1,2,3,4,5,6,7};
    int k = 3;

    Solution s1;
    s1.rotateRight(arr,k);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << " ";
    }

    return 0;
}