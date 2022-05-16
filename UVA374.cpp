#include <iostream>
using namespace std;

int mod(int B, int P, int M)
{
    if (P==0)
        return 1;
    if (P%2==0)
    {
        int x = mod(B, P/2, M);
        printf("B:%d-P:%d-M:%d-X:%d-Ans:%d\n", B, P, M, x, (x*x)%M);
        return (x*x)%M;
    }
    else
        return (B%M * mod(B, P-1, M))%M;
}

int main()
{
    int base, power, mod_value;
    while(cin>>base>>power>>mod_value)
    {
        cout << mod(base, power, mod_value) << endl;
    }
    return 0;
}