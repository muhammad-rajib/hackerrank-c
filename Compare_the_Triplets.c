// Compare the Triplets

#include <stdio.h>

int main()
{
    int n=3, a[100], b[100], a_score=0, b_score=0;
    

    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i=0; i<n; i++)
    {
        if (a[i]>b[i])
        {
            a_score += 1;
        }
        if (a[i]<b[i])
        {
            b_score += 1;
        }
    }

    printf("%d %d", a_score, b_score);

    return 0;

}