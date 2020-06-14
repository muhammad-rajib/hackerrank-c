// Plus and Minus

#include <stdio.h>

int main()
{
    int n;
    double positives=0, negatives=0, zeros=0;
    
    scanf("%d", &n);

    int arr[n];

    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<n; i++)
    {
        if (arr[i] >= 1)
            positives += 1;
        if (arr[i]<0)
            negatives += 1;
        if (arr[i]==0)
            zeros += 1;
    }

    printf("%f\n%f\n%f", positives/n, negatives/n, zeros/n);

    return 0;

}