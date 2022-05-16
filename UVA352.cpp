#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int visited[25][25];
int n, x, y, I, J, total;
char grid[1001][1001];

void fill_by_dfs(int a, int b)
{
    if (a < 0 || a >= n || b < 0 || b >= n)
        return;

    if (!visited[a][b] && grid[a][b] == '1')
    {
        visited[a][b] = 1;
        fill_by_dfs(a + 1, b + 1);
        fill_by_dfs(a + 1, b);
        fill_by_dfs(a + 1, b - 1);
        fill_by_dfs(a, b + 1);
        fill_by_dfs(a, b - 1);
        fill_by_dfs(a - 1, b + 1);
        fill_by_dfs(a - 1, b);
        fill_by_dfs(a - 1, b - 1);
    }
}

int main()
{
    int caso = 1;

    while (cin >> n)
    {
        // for each test case clear the grid
        memset(grid, '\0', sizeof(grid));
        // input grid value
        for (int i = 0; i < n; i++)
            cin >> grid[i];

        // define all visited false
        memset(visited, 0, sizeof(visited));

        total = 0;

        // find connected component
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == '1' && !visited[i][j])
                {
                    total++;
                    fill_by_dfs(i, j);
                }

        cout << "Image number " << caso << " contains " << total << " war eagles." << endl;
        caso++;
    }
}