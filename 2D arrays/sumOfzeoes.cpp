#include<iostream>
#include<vector>
using namespace std;

int coverageOfMatrix(vector<vector<int>> &mat) {
    int n = mat.size();
    int m = mat[0].size();
    int count =0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (mat[row][col] == 0)
            {
                //top
                if (row!=0 && mat[row-1][col] == 1)
                {
                    count++;
                }
                //left
                if (col!= 0 && mat[row][col-1] == 1)
                {
                    count++; 
                }
                //bottom
                if (row<(n-1) && mat[row+1][col] == 1)
                {
                    count++;
                }
                //right
                if (col < (m - 1) && mat[row][col + 1] == 1) {
                    count++;
                }
            }
            else{
                continue;
            }
        }
    }
    return count;
}


int main(){
    vector<vector<int>> mat = {{1,0,1},{0,1,0}};
    cout << coverageOfMatrix(mat);
    return 0;
}