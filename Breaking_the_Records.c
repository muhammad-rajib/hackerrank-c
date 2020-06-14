// Breaking the Records

#include <stdio.h>

int main()
{
    int n, a[1000], lowest_score=0, highest_score=0;

    // input total score and and values
    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = a[0], max = a[0];

    for (int i=0; i<n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
            highest_score += 1;
        }
        if (a[i]<min)
        {
            min=a[i];
            lowest_score += 1;
        }
    }

    printf("%d %d", highest_score, lowest_score);

    return 0;

}