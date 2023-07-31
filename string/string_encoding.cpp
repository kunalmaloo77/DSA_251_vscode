#include<iostream>
#include<string>
using namespace std;

string encode(string &s)
{
   int count = 1;
   string ans = "";
   for (int i = 1; i < s.length()+1; i++)
   {
        if (s[i-1] != s[i])
        {
            ans+=s[i-1];
            ans+=to_string(count);
            count = 1;
        }
        else{
            count++;
        }
   }
   return ans;
   
}

int main(){
    string s;
    cout << "Enter a string:";
    getline(cin, s);
    cout << encode(s);
    return 0;
}