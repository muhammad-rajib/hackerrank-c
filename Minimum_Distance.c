# include <stdio.h>
# include <math.h>

int main()
{
    int n, arr[100000], visited[100000]={0}, min_dis=10000, min=-1;
    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<n; i++)
    {
        if (visited[arr[i]] != 1)
        {
            visited[arr[i]] = 1;
            for (int j=i+1; j<n; j++)
            {
                if (arr[i]==arr[j])
                {
                    if (abs(i-j)<min_dis)
                    {
                        min_dis = abs(i-j);
                        break;
                    }
                }
            }
        }
        
    }
    if (min_dis==10000)
        printf("%d", min);
    else
        printf("%d", min_dis);
    return 0;
}