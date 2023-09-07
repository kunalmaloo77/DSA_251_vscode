#include<iostream>
#include<string>
using namespace std;

bool isSubSequence(string str1, string str2) {
    int i = 0;
    int j = 0; 
    while (j < str2.length())
    {
        if (str1[i] == str2[j])
        {
            i++;
        }
        if(i == str1.length()){
            break;
        }
        j++;
        
    }
    if(i == str1.length()){
        return true;
    }else{
        return false;
    }
    
}

int main(){
    string s1 = "bhavika";
    string s2 = "avi";  
    if (isSubSequence)
    {
        cout << "true";
    }
    else{
        cout << "false";
    }
    
    return 0;
}