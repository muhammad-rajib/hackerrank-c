#include <stdio.h>
#define Max 11

int matrix[Max][Max], color[Max][Max];
int n, sum, cas=1;

int main()
{
    while(1)
    {
        scanf("%d", &n);
        if (n==0)
            break;

        for (int i=0; i<Max; i++)
            for (int j=0; j<Max; j++)
                color[i][j] = 0;

        for (int i=1; i<=n; i++)
            for (int j=1; j<=n; j++)
                scanf("%d", &matrix[i][j]);
            
        printf("Case %d:", cas++);

        for (int i=1; i<=n; i++)
        {
            sum = 0;
            for (int j=i; j<=n; j++)
            {
                if (color[i][j]==0)
                {
                    sum += matrix[i][j];
                    color[i][j] = 1;
                }
                if (color[j][i] == 0)
                {
                    sum += matrix[j][i];
                    color[j][i] = 1;
                }
                if (color[j][n] == 0)
                {
                    sum += matrix[j][n];
                    color[j][n] = 1;
                }
                if (color[n][j] == 0)
                {
                    sum += matrix[n][j];
                    color[n][j] = 1;
                }
            }
            printf(" %d", sum);
            if (i==n)
                break;
            n--;
        }
        printf("\n");
    }
    return 0;
}