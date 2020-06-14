# include <stdio.h>

int main()
{
    int n, val, arr[102]={0}, max=0, index = -1, ans=0;

    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        scanf("%d", &val);
        arr[val]++;
        if (arr[val]>max)
        {
            max = arr[val];
            index = val;
        }
    }

    for (int i=0; i<=100; i++)
    {
        if (i != index)
            ans += arr[i];
    }

    printf("%d", ans);

    return 0;

}