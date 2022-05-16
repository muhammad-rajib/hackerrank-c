#include<stdio.h>
#define N 101

char sky[N][N];
int row, col, cnt;
char object;
bool find_star;

int X[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int x, int y)
{
    int u, v;

    if (x<0 || y<0 || x>=row || y>=col)
        return;
    if (sky[x][y] == '.')
        return;
    
    sky[x][y]='.';
    
    for (int k=0; k<8; k++)
    {
        u = x+X[k];
        v = y+Y[k];
        if (sky[u][v]=='*')
            find_star = false;
        dfs(u, v);
    }
}

int main()
{
    while (true)
    {
        scanf("%d %d", &row, &col);
        if (row == 0 && col == 0)
            break;
        
        for (int i=0; i<N; i++)
            for (int j=0; j<N; j++)
                sky[i][j] = '\0';
        
        for (int i=0; i<row; i++)
            scanf("%s", &sky[i]);
        
        cnt = 0;
        
        for (int i=0; i<row; i++)
            for (int j=0; j<col; j++)
                if (sky[i][j] != '.')
                {
                    find_star = true;
                    dfs(i, j);

                    if (find_star==true)
                        cnt++;
                }
        printf("%d\n", cnt);
    }
    return 0;
}