# include <stdio.h>

/*
int main()
{
    long long n;
    int d, beautiful_triplets=0, res1=0, res2=0, res3=0;
    
    scanf("%lld %d", &n, &d);

    long long arr[n];

    for (int i=0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if (i<j && j<k)
                {
                    res1 = arr[j]-arr[i];
                    res2 = arr[k]-arr[j];
                    printf("->%d=%d |", res1, res2);
                    if (res1==res2 && res2==d)
                    {   
                        beautiful_triplets += 1;   
                    }
                }
            }
        }
    }

    printf("%d", beautiful_triplets);

    return 0;

}
*/


int main()
{
    long long n;
    int d, beautiful_triplets=0, res1=0, res2=0, res3=0;
    
    scanf("%lld %d", &n, &d);

    long long arr[n];

    for (int i=0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[j]-arr[i]==d)
            {
                for (int k=j+1; k<n; k++)
                {
                    res2 = arr[k]-arr[j];
                    if (res1==res2 && res2==d)
                    {   
                        beautiful_triplets += 1;   
                }
            }
        }
    }

    printf("%d", beautiful_triplets);

    return 0;

}
