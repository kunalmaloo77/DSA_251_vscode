/*
You are given an array Arr consisting of n integers, you need to find a valid triplet as explained below.

An array is said to have a valid triplet {arr[i], arr[j], arr[k]} if there exists three indices i, j and k such that i != j, j != k and i != j and arr[i] + arr[j] = arr[k] or arr[i] + arr[k] = arr[j] or arr[k] + arr[j] = arr[i].
*/

#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;
vector<int> findTriplets2(vector<int>& arr, int n) {

    unordered_map<int,int>mp;
    vector<int> ans;
    for(int i= 0; i<n; i++) mp[arr[i]]++;
    for(int i=0; i<n; i++){
        bool f = false;
        for(int j = i+1; j<n; j++){
            if(mp[arr[i]+arr[j]] != 0){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                ans.push_back(arr[i]+arr[j]);
                f= true;
                break;
            }
        }

        if(f) break;
    }

    return ans;
}
vector<int> findTriplets(vector<int>& arr, int n) {
    unordered_set<int> elements;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int sum = arr[i] + arr[j];
            if (elements.find(sum) != elements.end()) {
                // Return the valid triplet
                return {arr[i], arr[j], sum};
            }
        }
        elements.insert(arr[i]);
    }
    return {};
}
int main()
{
    vector<int> arr = {48, 47, 34 ,56 ,56, 33 ,19, 12, 3 ,56 ,11, 67, 40 ,47, 60, 33 };
    vector<int> arrfinal = findTriplets2(arr,arr.size());
    for (int i = 0; i < arrfinal.size(); i++)
    {
        cout << arrfinal.at(i) << " ";
    }

    return 0;
}