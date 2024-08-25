#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
		
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    vector<int> intersectedArray;
    
    for(int i=0,j=0; i<n && j<m;){
        if(arr1[i] < arr2[j] ){
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
        else{
            intersectedArray.push_back(arr1[i]);
            i++;
            j++;
        }
        
    }
    return intersectedArray;
}

int main(){

    vector<int> array1 = {1,2,3};

    vector<int> array2 = {3,4};
    
    vector<int> intersectedArray;
   
    intersectedArray = findArrayIntersection(array1, array1.size(), array2, array2.size());
    for (int i = 0; i < intersectedArray.size(); i++)
    {
        cout << intersectedArray.at(i) << " ";
    }
    
    return 0;
}