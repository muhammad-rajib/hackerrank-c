# include <stdio.h>

int main()
{
    int arr[6][6];
    int max=0, sum=0;

    for (int i=0; i<6; i++)
    {
        for (int j=0; j<6; j++)
        {   
            scanf("%d", arr[i][j]);
        }
    }

    for (int i=0; i<4; i++)
    {
        for (int j=i; j<3+i; j++)
        {
            for (int k=0; k<3+i; k++)
            {
                if (arr[j][k] > 0)
                    sum += arr[j][k];
                else
                    sum -= arr[j][k];
            }
        }
    }

    printf("%d", max);

    return 0;

}