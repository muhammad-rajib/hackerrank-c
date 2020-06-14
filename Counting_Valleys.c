# include <stdio.h>

int main()
{
    int n, count_valley=0, level=0;
    char a[1000000];

    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        scanf("%s", &a[i]);
    }


    for (int i=0; i<n; i++)
    {
        if (a[i] == 'U')
        {
            if (level == -1)
            {
                count_valley ++;
            }
            level ++;
        }
        else
        {
            level --;
        }
        
    }

    printf("%d", count_valley);

    return 0;

}