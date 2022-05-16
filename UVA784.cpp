#include<stdio.h>

char map[100][100];

void dfs(int x, int y)
{
    if (map[x][y]=='X' || map[x][y]=='#')
        return;
    map[x][y] = '#';
    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);
}

int main()
{
    int test_case;
    char s[10];
    scanf("%d ", &test_case);

    while (test_case--)
    {
        for (int i=0; i<100; i++)
            for (int j=0; j<100; j++)
                map[i][j] = '\0';
        
        int n=0;
        int s[100];
        while (true)
        {
            scanf("%[^\n]%*c", &map[n]);
            if (map[n][0]=='_')
                break;
            n++;
        }

        for (int i=0; i<n; i++)
            for (int j=0; map[i][j]; j++)
                if (map[i][j] == '*')
                    dfs(i, j);
        
        for (int i=0; i<=n; i++)
            puts(map[i]);
    }
    return 0;   
}
