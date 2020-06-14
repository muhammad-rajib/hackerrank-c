# include <stdio.h>

int main()
{
    int arr[1001], count=0, n, small;

    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<n; i++)
    {
        small = 1001;
        count = 0;
        for (int j=0; j<n; j++)
        {
            if (small>=arr[j] && arr[j] != 0)
            {
                small = arr[j];
            }
            if (arr[j] != 0)
            {
                count++;
            }
        }
        if (count != 0)
        {
            printf("%d", count);
            printf("\n");
        }

        for (int k=0; k<n; k++)
        {
            if (arr[k] != 0)
            {
                arr[k] -= small;
            }
        }
    }
    return 0;
}
