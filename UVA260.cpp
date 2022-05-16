#include <bits/stdc++.h>
using namespace std;

#define Max 1111

int N;
int color[Max][Max];
char board[Max][Max];

void dfs(int i, int j)
{
    if (i < 1 && i > N && j < 1 && j > N)
        return;

    if (board[i][j] != 'w')
        return;

    if (color[i][j] == 0)
    {
        color[i][j] = 1;
        dfs(i - 1, j - 1);
        dfs(i - 1, j);
        dfs(i, j - 1);
        dfs(i, j + 1);
        dfs(i + 1, j);
        dfs(i + 1, j + 1);
    }
}

int main()
{
    int Output_number = 0, winner;

    while (scanf("%d", &N) && N)
    {
        // count total played game
        Output_number++;

        for (int i = 1; i <= N; i++)
            for (int j = 1; j <= N; j++)
                cin >> board[i][j];

        // find winner in the board
        for (int i = 1; i <= N; i++)
            if (board[i][1] == 'w' && color[i][1] == 0)
                dfs(i, 1);

        // check result board
        winner = 0;
        for (int i = 1; i <= N; i++)
        {
            if (color[i][N])
            {
                winner = 1;
                break;
            }
        }

        // Announce winner name
        if (winner == 1)
            printf("%d W\n", Output_number);
        else if (winner == 0)
            printf("%d B\n", Output_number);

        // clear the board for next game
        memset(color, 0, sizeof(color));
        memset(board, '\0', sizeof(board));
    }
    return 0;
}