#include<iostream>
#include <unordered_map>
#include<string>
using namespace std;

#include <unordered_map>
char firstNonRepeatingCharacter(string str) {
  unordered_map<char,int> map;
  for(int i = 0; i < str.length(); i++){
    if(map[str[i]] == 3){
      map[str[i]] = 4;
    }
    if(map[str[i]] != 4){
      map[str[i]] = 3;
    }
  }
  for(int i = 0; i < str.length(); i++){
    if(map[str[i]] == 3){
      return str[i];
    }
  }
  return str[0];
}

int main(){
    string s = "aDcadhc";
    cout << firstNonRepeatingCharacter(s);
    return 0;
}