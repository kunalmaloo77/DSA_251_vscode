#include<iostream>
#include<vector>
using namespace std;

int pairSum(vector<int> &arr, int n, int target){
	int i = 0;
	int j = n-1;
	int count = 0;
	

	while(i < j)
    {
		if((arr[i] + arr[j]) == target)
        {
			count++;
			i++;
		}
		else if ((arr[i] + arr[j]) < target)
        {
			i++;
		}
		else
        {
			j--;
		}
	}

    if(count == 0){
		return -1;
	}
	return count;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    cout << pairSum(arr,6,7);
    return 0;
}