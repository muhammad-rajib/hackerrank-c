#include <stdio.h>

int main()
{
    int n, m, high=-1, team=0;
    scanf("%d %d", &n, &m);
    
    char* topic[n];

    for (int i=0; i<n; i++)
    {
        topic[i] = (char*)malloc(1024*sizeof(char));
        scanf("%s", topic[i]);
    }

    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            int know=0;

            for (int x=0; x<m; x++)
            {
                know+=(topic[i][x]=='1' || topic[j][x]=='1')?1:0;
            }

            if (know>high)
            {
                high=know;
                team=1;
            }
            else
                if (know==high)
                    team++;
        }
    }

    printf("%d\n%d\n", high, team);

    return 0;
}