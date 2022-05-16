#include<stdio.h>
#define N 101

char grid[N][N];
int size, cnt, case_no=1;

void dfs(int x, int y)
{
    if (x<0 || y<0 || x>=size || y>=size)
        return;
    if (grid[x][y]=='.')
        return;
    
    grid[x][y] = '.';

    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);
}

int main()
{
    int test_case;
    scanf("%d", &test_case);

    while (test_case--)
    {
        scanf("%d", &size);

        for (int i=0; i<size; i++)
            scanf("%s", &grid[i]);

        cnt = 0;
        for (int i=0; i<size; i++)
            for (int j=0; j<size; j++)
                if (grid[i][j] == 'x')
                {
                    cnt++;
                    dfs(i, j);
                }
        printf("Case %d: %d\n", case_no++, cnt);
    }
    return 0;   
}