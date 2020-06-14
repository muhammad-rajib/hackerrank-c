# include <stdio.h>

int main()
{
    int arr[61], t, n;
    scanf("%d", &t);

    for (int i=0; i<t; i++)
    {
        scanf("%d", &n);
        for (int i=0; i<=n; i++)
        {
        if (i==0)
        {
            arr[i] = 1;
        }
        if (i==1)
        {
            arr[i] = 2;
        }
        if (i>1)
        {
            // spring
            if (i%2 != 0)
            {
                arr[i] = arr[i-1]*2;
            }
            // summer
            else
            {
                arr[i] = arr[i-1]+1;
            }
            
        }
        
    }
    printf("%d\n", arr[n]);
    }
    return 0;
}