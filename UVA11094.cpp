#include <stdio.h>

#define N 21

char map[N][N], land;
int visited[N][N];
int row, col, a, b, sum, ans;

void dfs(int x, int y)
{
    if (y < 0)
        y = col - 1;
    if (y >= col)
        y = 0;
    if (x<0 || x>=row)
        return;
    if (visited[x][y] == 1 || map[x][y] != land)
        return;
    
    visited[x][y] = 1;
    sum++;
    dfs(x, y+1);
    dfs(x, y-1);
    dfs(x+1, y);
    dfs(x-1, y);
}

int main()
{
    while (scanf("%d %d", &row, &col) == 2)
    {
        for (int i=0; i<N; i++)
            for (int j=0; j<N; j++)
                map[i][j] = '\0';

        for (int i=0; i<N; i++)
            for (int j=0; j<N; j++)
                visited[i][j] = 0;

        for (int i=0; i<row; i++)
            scanf("%s", &map[i]);

        scanf("%d %d", &a, &b);
        land = map[a][b];
        dfs(a, b);
        ans = 0;

        for (int i=0; i<row; i++)
            for (int j=0; j<col; j++)
            {
                sum = 0;
                dfs(i, j);
                if (sum > ans)
                    ans = sum;
            }
        
        printf("%d\n", ans);
    }
    return 0;
}