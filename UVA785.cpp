#include<stdio.h>

int visited[40][100] = {};
char g[40][100];

void dfs(int i, int j, char color)
{
    if (visited[i][j])
        return;
    if (g[i][j] == 'X')
        return;
    visited[i][j] = 1, g[i][j] = color;
    dfs(i+1, j, color);
    dfs(i-1, j, color);
    dfs(i, j+1, color);
    dfs(i, j-1, color);
}

int main()
{
    while(1)
    {
        int n = 0;
        while(1)
        {
            if (!scanf("%[^\n]%*c", &g[n]))
                return 0;
            if (g[n][0] == '_')
                break;
            n++;
        }

        for (int i=0; i<40; i++)
            for (int j=0; j<100; j++)
                visited[i][j]=0;

        for (int i=0; i<n; i++)
            for (int j=0; g[i][j]; j++)
                if (g[i][j] != 'X' && g[i][j] != ' ')
                {
                    if (visited[i][j])
                        continue;
                    dfs(i, j, g[i][j]);
                }
        
        for (int i=0; i<n; i++)
            puts(g[i]);
        puts("_____________________________");
    }
    return 0;
}