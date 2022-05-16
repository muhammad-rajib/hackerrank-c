#include<bits/stdc++.h>
using namespace std;
long long dearrangement(long long n)
{
    if(n==0) return 1;
    if(n==1) return 0;
    else if(n==2) return 1;
    return (n-1)*(dearrangement(n-1)+dearrangement(n-2));
}
long long factorial(long long n)
{
    long long sum=1;
    for(long long i=1;i<=n;i++) sum*=i;
    return sum;
}
long long combination(long long a,long long b)
{
    long long sumA=factorial(a);
    long long sumB=factorial(b);
    long long sumC=factorial(a-b);
    long long total=sumA/(sumB*sumC);
    return total;
}
int main()
{
    long long n,m;
    while(cin>>n>>m)
    {
        long long sum=0;
        sum+=dearrangement(n);
        for(long long i=1;i<=m;i++)
        {
            sum+=combination(n,i)*dearrangement(n-i);
        }
        cout<<sum<<endl;
    }
    return 0;
}