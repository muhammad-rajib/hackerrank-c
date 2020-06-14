#include <stdio.h>

int main()
{
    int n, sum=0, temp;
    scanf("%d", &n);

    if (n>=10000 && n<=99999)
    {
        for (int i=0; i<5; i++)
        {
            sum += n%10;
            n = n /10;
        }
    }
    
    printf("%d", sum);

    return 0;
}