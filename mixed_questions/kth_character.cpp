#include <iostream>
#include <string>
using namespace std;

char kThCharaterOfDecryptedString(string s, long long k)
{
    string st = "";
    string decrypted = "";
    for (int i = 0; i < s.length();)
    {
        if (isdigit(s[i]))
        {
            string intToChar = "";
            while (isdigit(s[i]))
            {
                intToChar.push_back(s[i]);
                i++;
            }
            int a = stoi(intToChar);
            for (int j = 0; j < a; j++)
            {
                decrypted.append(st);
            }
            st = "";
        }
        else
        {
            st.push_back(s[i]);
            i++;
        }
    }
    return decrypted[k - 1];
}
int main()
{
    string s = "a2b3cd3";
    char ans = kThCharaterOfDecryptedString(s, 8);
    cout << ans << endl;
    return 0;
}