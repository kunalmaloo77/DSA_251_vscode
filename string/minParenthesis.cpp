#include<iostream>
#include<string>
using namespace std;
 
int minimumParentheses(string pattern) {
    int openCount = 0;
    int closedCount = 0;
    for (int i = 0; i < pattern.size(); i++)
    {
        if (pattern[i] == '(')
        {
            openCount++;
            continue;
        }
        if (pattern[i] == ')' && openCount != 0)
        {
            openCount--;
            continue;
        }
        if (pattern[i] == ')' && openCount == 0)
        {
            closedCount++;
            continue;
        }
    }
    return openCount + closedCount;
    
}

int main(){
    string str;
    getline(cin, str);
    cout << minimumParentheses(str);
    return 0;
}