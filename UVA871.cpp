#include<stdio.h>
#define N 25

char grid[N][N];
int cnt, result;
int X[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int x, int y)
{
    if (x<0 || y<0 || x>=N || y>=N)
        return;
    if (grid[x][y]=='*')
        return;
    
    if (grid[x][y]=='1')
    {
        grid[x][y]='*';
        cnt++;
        dfs(x-1, y-1);
        dfs(x-1, y);
        dfs(x-1, y+1);
        dfs(x, y-1);
        dfs(x, y+1);
        dfs(x+1, y-1);
        dfs(x+1, y);
        dfs(x+1, y+1);
    }
}

int main()
{
    int test_case;
    char a[35];
    scanf("%d ", &test_case);

    while (test_case--)
    {
        result=0;

        for (int i=0; i<N; i++)
            for (int j=0; j<N; j++)
                grid[i][j]='\0';

        int row = 0;
        while (true)
        {
            scanf("%[^\n]%*c", grid[row]);
            if (grid[row][0]=='\0')
                break;
            row++;
        }

        for (int i=0; i<N; i++)
            for (int j=0; j<N; j++)
                if (grid[i][j]=='0')
                    grid[i][j]='*';

        for (int i=0; i<N; i++)
            for (int j=0; j<N; j++)
                if (grid[i][j]=='1')
                {   
                    cnt=0;
                    dfs(i, j);
                    result = result > cnt ? result : cnt;
                }

        printf("%d\n", result);
        if (test_case!=0)
        {
            printf("\n");
            fgets(a, 30, stdin);
        }
    }
    return 0;
}
