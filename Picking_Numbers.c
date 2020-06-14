#include <stdio.h>

int main()
{
    int n, k, max=0;
    int arr[100] = {0};
    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        scanf("%d", &k);
        arr[k]++;
    
    }
    for (int i=0; i<n-1; i++)
    {
        if (arr[i]+arr[i+1]>max)
            max = arr[i]+arr[i+1];
    }
    printf("%d",max);
    return 0;
}