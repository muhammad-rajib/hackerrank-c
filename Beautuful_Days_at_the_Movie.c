# include <stdio.h>

int main()
{
    long long start, end, div, beauty_days=0, day;

    long long reminder, rev=0, result;

    scanf("%lld %lld %lld", &start, &end, &div);

    for (long long i=start; i<=end; i++)
    {
        
        day = i;
        while (day != 0)
        {
            reminder = day % 10;
            rev = rev * 10 + reminder;
            day = day / 10;
        }
           
        result = (i-rev)%div;
        if (result==0)
        {
            beauty_days += 1;
        }

        rev = 0;
        
    }

    printf("%lld", beauty_days);

    return 0;

}