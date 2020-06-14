# include <stdio.h>

int main()
{
    int n, k, height, h=0, ans;
    scanf("%d %d", &n, &k);

    for (int i=0; i<n; i++)
    {
        scanf("%d", &height);
        if (height>h)
        {
            h = height;
        }
    }


    if (h>k)
    {
        ans = h - k;
    }
    else
    {
        ans = 0;
    }
    
    printf("%d", ans);

    return 0;

}