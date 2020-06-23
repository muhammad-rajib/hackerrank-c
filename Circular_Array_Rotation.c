#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Read Input
    int n, k, q;
    scanf("%d %d %d", &n, &k, &q);

    int arr[n];

    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    k = k % n;
    for (int i=0; i<q; i++)
    {
        int b;
        scanf("%d", &b);
        printf("%d\n", arr[(n-k+b)%n]);
    }
    return 0;
}