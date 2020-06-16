# include <stdio.h>

int main()
{
    int t, wrapper, count=0;
    scanf("%d", &t);

    int n, c, m;
    for (int i=1; i<=t; i++)
    {
        scanf("%d %d %d", &n, &c, &m);
        
        wrapper = n/c;
        count = wrapper;

        while (wrapper >= m)
        {
            wrapper = wrapper - m;
            count++;
            wrapper++;
        }
        printf("%d\n", count);
    }
    return 0;
}