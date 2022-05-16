#include<stdio.h>

char map[105][105], visited[105][105];
int X[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int ans;

void dfs(int x, int y)
{
    if (x<0 || y<0 || map[x][y]==0 || visited[x][y]!=0 || map[x][y] != 'W')
        return;

    visited[x][y]=1;
    ans++;

    for (int i=0; i<8; i++)
        dfs(x+X[i], y+Y[i]);
}

int main()
{
    char str[105];
    int test_case, row, col;
    scanf("%d\n\n", &test_case);

    while(test_case--)
    {
        for (int i=0; i<105; i++)
            for (int j=0; j<105; j++)
                map[i][j]=0;

        int n=0;

        while(fgets(str, 105, stdin))
        {
            if (str[0] == '\n')
                break;
            
            if (str[0]!='W' && str[0]!='L')
            {                    
                sscanf(str, "%d %d", &row, &col);
                
                for (int i=0; i<105; i++)
                    for (int j=0; j<105; j++)
                        visited[i][j]=0;

                ans = 0;
                dfs(row-1, col-1);
                printf("%d\n", ans);
            }
            else
            {
                sscanf(str, "%s", map[n]);
                n++;
            }
        }
        if (test_case>0)
            printf("\n");
    }
    return 0;
}