# include <stdio.h>

int main()
{
    int arr[51], n, x, y;

    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i==arr[j])
            {
                x = j;
                break;
            }   
        }
        for (int k=1; k<=n; k++)
        {
            if (x==arr[k])
            {
                printf("%d", k);
                break;
            }
        }
        printf("\n");
    }
    return 0;
}