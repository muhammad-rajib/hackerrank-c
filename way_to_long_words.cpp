#include <iostream>
using namespace std;

int main()
{
    int n, l;
    string str;
    cin >> n;
    getline(cin, str);
    for (int i=0; i<n; i++)
    {
        getline(cin, str);
        l = str.length();
        if (l > 10)
            cout << str[0] << l-2 << str[l-1] << endl;
        else
            cout << str << endl;
    }
}