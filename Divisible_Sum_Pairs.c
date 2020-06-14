// Divisible Sum Pairs

#include <stdio.h>

int main()
{

    int n, k, total_pairs=0, pair_sum=0, res=0;

    scanf("%d", &n);
    scanf("%d", &k);

    int a[n];

    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i<j)
            {
                pair_sum = a[i] + a[j];
                res = pair_sum%k;

                if (res == 0)
                {
                    total_pairs += 1;
                }
            }
        }

    }

    printf("%d", total_pairs);

    return 0;
}