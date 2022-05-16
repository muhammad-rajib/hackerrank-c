#include <iostream>
using namespace std;

int main()
{
    string s, ch;
    cin >> s;
    
    char s1 = s[0];
    if (isupper(s1))
        cout << s << endl;
    else
    {
        ch = s[0]-32;
        for (int i=1; i<s.length(); i++)
            ch = ch+s[i];
        cout << ch << endl;
    }
}