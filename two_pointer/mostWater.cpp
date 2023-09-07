#include<iostream>
#include<vector>
using namespace std;

//Brute Froce
// int maxArea(vector<int>& height) {
//     int max_count = -1;
//     int count = 0;
//     int n = height.size();
//     for (int i = 0; i < n; i++)
//     {
//         for(int j = i+1; j < n; j++){
//             count = min(height[i],height[j])*(j+1-(i+1));
//             if (count > max_count)
//             {
//                 max_count = count;
//             }
            
//         }
//     }
//     return max_count;
// }

//Best Approach

int maxArea(vector<int>& height) {
    int area = 0;
    int n = height.size();
    int i = 0;
    int j = n-1;
    while (i < j)
    {
        area = max((min(height[i],height[j]))*(j-i),(area));
        if (height[j] < height[i])
        {
            j--;
        }
        else{
            i++;
        }
        
    }
    return area;
}
int main(){
    vector<int> arr = {6, 11, 7, 4, 7, 1, 3, 8, 10, 10, 7, 2};
    cout << maxArea(arr);
    return 0;
}