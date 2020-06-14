# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    long long n, count, reminder, rept, len, reminder_count;

    cin >> str;
    cin >> n;
    
    len = str.length();
    rept = n/len;
    reminder = n%len;

    for (int i=0; i<len; i++)
    {   
        if (str[i]=='a')
            count ++;
        if (str[i]=='a' && i<reminder)
            reminder_count++;
    }

    cout << (count*rept)+reminder_count << endl;

    return 0;
}
