#include<stdio.h>
#define MAX 10005

int dominos[MAX][MAX];
int visited[MAX];
int n, m, l, z, cnt;

void dfs(int a)
{
    cnt++;
    visited[a] = 1;
    for (int i=1; i<=n; i++)
    {
        if (dominos[a][i] == 1 && visited[i]==0)
        {
            visited[i] = 1;
            dfs(i);
        }
    }
}

int main()
{
    int test_case;
    int x, y;
    scanf("%d", &test_case);

    while (test_case--)
    {
        scanf("%d %d %d", &n, &m, &l);
        
        for (int i=0; i<MAX; i++)
            for (int j=0; j<MAX; j++)
                dominos[i][j] = 0;

        for (int i=0; i<MAX; i++)
            visited[i] = 0;

        for (int i=0; i<m; i++)
        {
            scanf("%d %d", &x, &y);
            dominos[x][y] = 1;
        }

        cnt = 0;

        for (int i=0; i<l; i++)
        {
            scanf("%d", &z);
            if (visited[z] == 0)
                dfs(z);
        }
        printf("%d\n", cnt);
    }
    return 0;
}