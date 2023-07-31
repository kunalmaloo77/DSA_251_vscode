#include <iostream>
#include<string>
using namespace std;

void reverse(string& s, int start, int end){
    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

string reverseStringWordWise(string input)
{
    int n = input.length();

    reverse(input, 0, n-1);
    input.insert(input.end(), ' ');
    int j =0;
    for (int i = 0; i < n+1; i++)
    {
        if (input[i] == ' ')
        {
            reverse(input, j,i-1);
            j = i+1;
        }
        
    }
    input.pop_back();
    return input;
}

int main()
{
    string s;
    cout << "Enter String: ";
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;

    return 0;
}