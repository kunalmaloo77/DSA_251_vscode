#include<iostream>
#include<vector>
using namespace std;
 
void inplaceRotate(vector<vector<int>> &inputArray)
{   
    vector<vector<int>> array2 = inputArray;
    int n = inputArray.size();
    int m = inputArray[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            inputArray[j][i] = array2[i][n-j-1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << inputArray[i][j] << " ";
        }
        cout << endl;
    }
    
}
int main(){
    vector<vector<int>> array = {{1,2,3},{4,5,6},{7,8,9}};
    inplaceRotate(array);
    
    return 0;
}