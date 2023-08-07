#include<iostream>
#include<vector>
using namespace std;
 
bool isMatrixSymmetric(vector<vector<int>> matrix){
    for(int i = 0;i<matrix.size();i++){
        for(int j = 0; j < matrix[0].size(); j++){
            if(i != j && matrix[i][j] != matrix[j][i]){
                return false;
            }
        }
    } 
    return true;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{2,4,5},{3,5,8}};
    if (isMatrixSymmetric(matrix))
    {
        cout << "This is symmetric";
    }
    else{
        cout << "This is asymmetric";
    }
    
    return 0;
}
