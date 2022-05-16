#include <iostream>
using namespace std;

int main()
{
    int n, m, cnt, res=0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cnt = 0;
        for (int j=0; j<3; j++)
        {
            cin >> m;
            if (m == 1)
                cnt++;
        }
        if (cnt >= 2)
            res++;
    }
    cout << res << endl;
}