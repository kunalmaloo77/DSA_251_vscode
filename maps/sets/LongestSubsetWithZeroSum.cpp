#include<iostream>
#include<unordered_map>
#include <vector>

using namespace std;

int LongestSubsetWithZeroSum(vector <int> arr) {
    int sum =0;
    int max_count = 0;
    unordered_map<int,int> map;
    for (int i = 0; i < arr.size(); i++)
    {
        sum+=arr[i];
        if(sum == 0){
            max_count = i+1;
        }
        if(map.find(sum)!=map.end()){
            max_count = max(max_count,i-map[sum]);
        }
        else{
            map[sum] = i;
        }
    }
    return max_count;
}
using namespace std;
int main(){
    vector<int> array = {22, -22, 35 ,76 ,87 ,-24 ,0 ,0, 24, 1, 0 ,0};
    cout << LongestSubsetWithZeroSum(array);
    return 0;
}