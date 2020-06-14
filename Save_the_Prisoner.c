# include <stdio.h>

/*
int main()
{

    long long prisoners, sweets;
    int test_cases, seat_number;

    scanf("%d", &test_cases);

    for (int i=0; i<test_cases; i++)
    {
        scanf("%lld %lld %d", &prisoners, &sweets, &seat_number);
    
        while (sweets != 1)
        {
            
            if (seat_number == prisoners)
            {
                seat_number = 1;
                sweets -= 1;
                //printf("%d -> %lld\n", seat_number, sweets);
            }
            else            {
                sweets -= 1;
                seat_number += 1;
                //printf("%d -> %lld\n", seat_number, sweets);
            }
    
        }
        printf("%d\n", seat_number);
    }
    return 0;
}
*/

int main()
{

    long long prisoners, sweets;
    int test_cases, sit_number, res=0;

    scanf("%d", &test_cases);

    for (int i=0; i<test_cases; i++)
    {
        scanf("%lld %lld %d", &prisoners, &sweets, &sit_number);

        res = (sweets+sit_number-1) % prisoners;

        if (res==0)
        {
            printf("%lld\n", prisoners);
        }
        else
        {
             printf("%d\n", res);   
        }

    }

    return 0;

}