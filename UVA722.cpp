#include<stdio.h>

char g[105][105], visited[105][105];
int n, m, ans;

void dfs(int x, int y)
{
    if (x<0 || y<0 || x>=n || y>=m)
        return;
    if (g[x][y]=='1' || visited[x][y])
        return;

    visited[x][y]=1;
    ans++;
    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);
}


int main()
{
    int test_case, x, y; 
    scanf("%d", &test_case);

    while(test_case--)
    {
        scanf("%d %d", &x, &y);

        for (int i=0; i<105; i++)
            for (int j=0; j<105; j++)
                visited[i][j]=0;
        
        for (int i=0; i<105; i++)
            for (int j=0; j<105; j++)
                g[i][j]='\0';

        n = 0;
        getchar();
        while(1)
        {
            gets(g[n]);
            if (g[n][0]=='\0')
                break;
            n++;
        }

        m = 0;
        for (int i=0; g[0][i]; i++)
                m++;

        ans=0;
        dfs(x-1, y-1);
        printf("%d\n", ans);
        if(test_case)
            printf("\n");
    }
    return 0;
}