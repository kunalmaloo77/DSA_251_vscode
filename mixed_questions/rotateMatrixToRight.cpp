#include <iostream>
#include <vector>
#include <queue>

using namespace std;
// brute force
vector<int> rotateMatRight(vector<vector<int>> mat, int n, int m, int k)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        queue<int> q;
        int remainder = (k%m);
        for (int j = 0; j < m-remainder; j++)
        {
            q.push(mat[i][j]);
        }
        for (int j = m-remainder; j < m; j++)
        {
            mat[i][j - (m-remainder)] = mat[i][j];
        }
        for (int j = remainder; j < m; j++)
        {
            int a = q.front();
            mat[i][j] = a;
            q.pop();
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans.push_back(mat[i][j]);
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans = rotateMatRight(mat, 3, 3, 2);
    for (int i = 0; i < 9; i++)
    {
        cout << ans.at(i) << " ";
    }

    return 0;
}
