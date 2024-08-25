#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool areAnagram(string &str1, string &str2){
    if (str1.length() != str2.length())
    {
        return false;
    }
    
    unordered_map<char, bool> map;
    for (int i = 0; i < str1.length(); i++)
    {
        map[str1[i]] = true;
    }
    for (int j = 0; j < str2.length(); j++)
    {
        if (map[str2[j]] == true)
        {
            continue;
        }
        else{
            return false;
        }
    }
    return true;
    
}
int main(){
    string s1 = "listen";
    string s2 = "silent";
    if (areAnagram(s1,s2))
    {
        cout << "Are Anagram" << endl;
    }
    else{
        cout << "Not Anagram" << endl;

    }
    
    return 0;
}