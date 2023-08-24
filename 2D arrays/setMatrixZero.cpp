#include<iostream>
#include<vector>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
    int m = matrix[0].size();
    vector<bool> row; 
    vector<bool> col; 

    for (int i = 0; i < m; i++)
    {
        col.push_back(false);
    }

    for (int i = 0; i < n; i++)
    {
        row.push_back(false);
    }

	for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                row[i] = true;
                col[j] = true;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i])
            {
                matrix[i][j] = 0;
            }
            
        }
        
    }

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (col[j])
            {
                matrix[i][j] = 0;
            }
            
        }
        
    }
    

}

int main(){
    vector<vector<int>> array = {{1,2,5,6},{3,9,0,4},{4,4,7,0}};
    setZeros(array);
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array[0].size(); j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}