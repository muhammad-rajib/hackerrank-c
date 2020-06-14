# include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);

    int arr[n];

    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp = n-1;
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[temp]);
        temp--;
    }

    return 0;

}
