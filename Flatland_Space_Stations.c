#include <stdio.h>

int main()
{
    long int n, m, val, p=0, q=0;

    scanf("%ld %ld", &n, &m);
    
    long dis[n], left[n], right[n];

    for (int i=0; i<n; i++)
    {
        dis[i]=-1;
        right[i]=0;
        left[i]=0;
    }

    for (int i=0; i<n; i++)
    {
        scanf("%ld", &val);
        dis[val]=val;
    }

    for (int i=0; i<n; i++)
    {
        p=0, q=0;
        for (int j=i,k=i; j<n||k>=0; j++, k--)
        {
            if (j<n)
            {
                if (dis[j]==-1)
                    p++;
                else
                {
                    right[i]=p;
                    break;
                }                 
            }
            if (k>=0)
            {
                if (dis[k]==-1)
                    q++;
                else
                {
                    left[i]=q;
                    break;
                }
            }
        }
    }
    int max1 = right[0], max2 = left[0];
    for (int i=0; i<n; i++)
    {
        if (right[i]>max1)
            max1 = right[i];
        if (left[i]>max2)
            max2 = left[i];
    }

    if (max1>max2)
        printf("%d", max1);
    else
        printf("%d", max2);
    
    return 0;
}