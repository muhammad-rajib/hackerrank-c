# include <stdio.h>

int main()
{
    int test_case, attendance_count=0, attendance;
    int n, k;
    
    scanf("%d", &test_case);
    
    for (int i=0; i<test_case; i++)
    {
        scanf("%d %d", &n, &k);

        for (int i=0; i<n; i++)
        {
            scanf("%d", &attendance);
            if (attendance<=0)
            {
                attendance_count += 1;
            }
        }

        if (attendance_count<=k)
        {
            printf("YES");
            attendance_count = 0;
        }
        else
        {
            attendance_count = 0;
            printf("NO");
        }

        printf("\n");
    }

    return 0;

}