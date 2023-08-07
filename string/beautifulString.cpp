#include<iostream>
#include<string>
using namespace std;

int makeBeautiful(string str) {
	//case1 
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (i%2 == 0 && str[i] != '0')
        {
            count1++;
        }
        if(i%2 != 0 && str[i] != '1')
        {
            count1++;
        }
        if (i%2 == 0 && str[i] != '1')
        {
            count2++;
        }
        if(i%2 != 0 && str[i] != '0')
        {
            count2++;
        }
        
    }
    return min(count1,count2);
    
}
int main(){
    string str;
    getline(cin, str);
    cout << makeBeautiful(str);
    return 0;
}