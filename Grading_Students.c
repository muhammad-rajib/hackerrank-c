# include <stdio.h>

int main()
{

    int n;
    int num;

    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        scanf("%d", &num);

        if (num >= 38 && num % 5 >2)
        {
            num = num + (5 - (num%5));
        }

        printf("%d\n", num);

    }

    return 0;

}