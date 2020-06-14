# include <stdio.h>

int main()
{
    int largeAnd=0, largeOr=0, largeXor=0;

    int n, k;

    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i=1; i<=n; i++)
    {
        for (int j=i+1; j<=n; j++)
        {
            int and=i&j;
            if (and<k && and>largeAnd)
            {
                largeAnd = and;
            }

            int or=i|j;
            if (or<k && or>largeOr)
            {
                largeOr = or;
            }

            int xor=i^j;
            if (xor<k && xor>largeXor)
            {
                largeXor = xor;
            }
        }
    }

    printf("%d\n%d\n%d", largeAnd, largeOr, largeXor);

    return 0;

}