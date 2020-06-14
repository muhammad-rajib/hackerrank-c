#include <stdio.h>

int main()
{
    int N, val;
    scanf("%d", &N);
    
    for (int i=1; i<N+1; i++)
    {
        for (int j=1; j<(N+1)-i; j++)
        {
            printf(" ");
        }
        for (int k=0; k<i; k++)
        {
            printf("#");
        }
        printf("\n"); 
    }
    
    return 0;
}