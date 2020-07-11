/*
#include<iostream>
#include<string.h>
using namespace std;

// BLACK=0, WHITE=1

int graph[200][200], c[200], C[200];

bool paint(int node, int color)
{
    C[node] = color;
    for (int i=0; i<c[node]; i++)
    {
        if (C[graph[node][i]]==color)
            return false;
        else if (C[graph[node][i]]==0)
            if (!paint(graph[node][i], color==1?2:1))
                return false;
    }
    return true;
}

int main()
{
    int node, edge;
    while (cin >> node >> edge)
    {
        memset(c, 0, sizeof(c));
        for (int i=0; i<edge; i++)
        {
            int parent_node, child_node; 
            cin >> parent_node >> child_node;
            graph[parent_node][c[parent_node]++] = child_node;
            graph[child_node][c[child_node]++] = parent_node;
        }
        memset(C, 0, sizeof(C));
        bool bi = paint(0, 1);
        cout << (bi ? "BICOLORABLE." : "NOT BICOLORABLE.") << endl;
    }
    return 0;
}
*/


#include<iostream>
#include<vector>
#include<queue>
using namespace std;

static const int BLACK = 0;
static const int WHITE = 1;
static const int UNKNOWN = 2;

int main()
{
    int nodes;
    while (cin >> nodes, nodes != 0)
    {
        vector<vector<int>> graph(nodes);
        vector<int> color(nodes, UNKNOWN);
        bool isBipartite = true;

        int edges;
        cin >> edges;
        while(edges --)
        {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        queue<int> q;
        color[0] = BLACK;
        q.push(0);
        while (!q.empty() && isBipartite)
        {
            int u = q.front();
            q.pop();
            for (int i=0; i<graph[u].size(); ++i)
            {
                int v = graph[u][i];
                if (color[v] == color[u])
                {
                    isBipartite = false;
                    break;
                }
                else if (color[v] == UNKNOWN)
                {
                    color[v] = 1 - color[u];
                    q.push(v);
                }
            }
        }
        if (isBipartite)
            cout << "BIOCOLORABLE." << endl;
        else
            cout << "NOT BICOLORABLE." << endl;
    }
    return 0;
}