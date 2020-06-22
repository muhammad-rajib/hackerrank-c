#include <stdio.h>
#include <math.h>

int main()
{
    int t, a, b;

    scanf("%d", &t);

    for (int i=0; i<t; i++)
    {
        scanf("%d %d", &a, &b);

        int count = 0, result=0;

        for (int j=sqrt(a); j<=sqrt(b); j++)
        {
            result = j*j;
            if (result>=a && result<=b)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}