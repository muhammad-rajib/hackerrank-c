#include <stdio.h>
#define Max 55

int col, row, cnt = 0, a, b, u, v;
char grid[Max][Max];
bool visited[Max][Max];
int X[] = {0, 0, 1, -1};
int Y[] = {-1, 1, 0, 0};

void dfs(int x, int y)
{
    int nx, ny;

    if (grid[x][y] == '#')
        return;

    if (grid[x][y] == 'G')
        cnt++;
    
    grid[x][y] = '#';
    if (visited[x][y])
        for (int i=0; i<4; i++)
        {
            nx = x + X[i]; ny = y + Y[i];
            if (x>=0 && y>=0 && x<row && y<col)
                dfs(nx, ny);
        }
}

int main()
{
    while (scanf("%d %d", &col, &row) == 2)
    {
        for (int i=0; i<Max; i++)
            for (int j=0; j<Max; j++)
                visited[i][j] = true;

        for (int i = 0; i < row; i++)
            scanf("%s", grid[i]);

        for (int i=0; i<row; i++)
            for (int j=0; j<col; j++)
                for (int k=0; k<4; k++)
                {
                    u = i + X[k], v = j + Y[k];
                    if (u>=0 && v>=0 && u<row && v<col && grid[u][v]=='T')
                        visited[i][j] = false;
                }

        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                if (grid[i][j] == 'T')
                    grid[i][j] = '#';
                else if (grid[i][j] == 'P')
                {
                    a = i;
                    b = j;
                }
        cnt = 0;
        dfs(a, b);
        printf("%d\n", cnt);
    }
    return 0;
}