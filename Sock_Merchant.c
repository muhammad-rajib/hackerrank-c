# include <stdio.h>

int main()
{

    int n, pair=0;
    scanf("%d", &n);

    int arr[n], num[1000] = {0};

    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        num[arr[i]] += 1;
        if (num[arr[i]]==2)
        {
            pair += 1;
            num[arr[i]] = 0;
        }
    }

    printf("%d", pair);

    return 0;

}