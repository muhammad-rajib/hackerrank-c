#include<stdio.h>
#include<string.h>
#define N 9

int cnt, white, black;
bool is_black, is_white;
char board[N][N];

void dfs(int x, int y)
{
    if (x<0 || x>=N || y<0 || y>=N)
        return;
    if (board[x][y]=='.')
    {
        board[x][y]='*';
        cnt++;
    }
    else
    {
        if (board[x][y]=='O')
            is_white=true;
        else if (board[x][y]=='X')
            is_black=true;
        return;
    }
    
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
        black = white = 0;

        for (int i=0; i<N; i++)
            scanf("%s", &board[i]);

        for (int i=0; i<N; i++)
            for (int j=0; j<N; j++)
                if (board[i][j]=='X')
                    black++;
                else if (board[i][j]=='O')
                    white++;
                else if (board[i][j]=='.')
                {
                    is_black=false;
                    is_white=false;
                    cnt = 0;
                    dfs(i, j);
                    if (is_black && is_white)
                        continue;
                    if (is_white)
                        white += cnt;
                    else
                        black += cnt;
                }
        printf("Black %d White %d\n", black, white);        
    }
    return 0;
}