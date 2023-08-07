#include<iostream>
#include<string>
using namespace std;

string nextLargestPalindrome(string s, int length){
    string x =s;
    for (int i = length/2; i < length; i++)
    {
        s[i] = s[length-i-1];
    }
    if (s > x)
    {
        return s;
    }
    else{
        for (int i = (length-1)/2; i >= 0; i--)
        {
            if (x[i] != '9')
            {
                x[i]++;
                break;
            }
            else{
                x[i] ='0';
            } 
        }
        for (int i = length/2; i < length; i++) {

            x[i] = x[length-i-1];

        }

        if(x[0] == '0'){
            x+='1';
            x[0] = '1';
        }

        return x;        
    }
    
}

int main(){
    string s = "183659";
    cout << nextLargestPalindrome(s,s.length());
    return 0;
}