#include<iostream>
#include<unordered_map>
using namespace std;

//brute force
// int findMajorityElement(int arr[], int n) {
// 	unordered_map<int,int> map;
// 	for(int i = 0; i < n; i++){
// 		map[arr[i]] = 0;
// 	}	
// 	for(int i = 0; i < n; i++){
// 		map[arr[i]]++;
// 		if(map[arr[i]] > floor(n/2)){
// 			return arr[i];
// 		}
		
// 	}
// 	return -1;
// }

//good approach
int findMajorityElement(int arr[], int n) {

	int majorityElement = -1;
	int count = 0;

	for(int i = 0; i < n; i++){
		if(count == 0){
			count = 1;
			majorityElement = arr[i];
			continue;
		}
		if(arr[i] == majorityElement){
			count++;
		}
		else{
			count--;
		}
		
	}	
	count = 0;
	for(int i = 0;i<n;i++){
		if(arr[i] == majorityElement){
			count++;
		}
	}
	if(count > n/2){
		return majorityElement;
	}	
	
	return -1;
}
int main(){
    int arr[] = {8 ,8 ,8, 10, 8, 10};
    cout << findMajorityElement(arr,6);
    return 0;
}