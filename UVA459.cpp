#include <bits/stdc++.h>
using namespace std;
bool visited[1000];
vector<int> adj[1000];

void add(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(int s)
{
    if (visited[s])
        return;

    visited[s] = true;
    for (int i = 0; i < adj[s].size(); i++)
    {
        int x = adj[s][i];
        if (!visited[x])
        {
            dfs(x);
        }
    }
}

int main()
{
    int test_case, n, u, v;
    char c[2], s[5], dump[5];

    scanf("%d\n", &test_case);
    while (test_case--)
    {
        scanf("%c", c);
        n = c[0] - 64;

        fgets(dump, 100, stdin);

        while (fgets(s, 100, stdin))
        {
            if (s[0] == '\n')
                break;
            u = s[0] - 65;
            v = s[1] - 65;
            add(u, v);
        }

        int cnt = 0;
        memset(visited, 0, sizeof(visited));

        for (int i = 0; i < n; i++)
            if (!visited[i])
            {
                dfs(i);
                cnt++;
            }

        if (test_case == 0)
            printf("%d\n", cnt);
        else
        {
            printf("%d\n\n", cnt);
            for (int i = 0; i < n; i++)
                adj[i].clear();
        }
    }
    return 0;
}