# include <stdio.h>
# include <math.h>

int main()
{

    int test_case, count=0;
    long long n, digit, temp;

    scanf("%d", &test_case);

    for (int i=0; i<test_case; i++)
    {
        scanf("%lld", &n);
        count = 0;
        temp = n;
        while (temp>0)
        {
            digit = temp%10;
            temp = temp / 10;

            if (digit != 0 && n%digit==0)
            {
                count += 1;
            }
            
        }
        printf("%d", count);
        printf("\n");
    }

    return 0;

}