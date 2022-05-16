#include<stdio.h>

static const int BLACK = 0;
static const int WHITE = 1;
static const int UNKNOWN = 2;

int nodes, edges;
int g[1000][1000];
int color[1000];
bool isBipartite=false;

void dfs(int x)
{
    for (int i=0; i<1000; i++)
    {
        if (g[x][i]==1 && color[x] == color[i])
        {
            isBipartite = false;
            return;
        }
        else if (g[x][i]==1 && color[i] == UNKNOWN)
        {
            color[i] = 1 - color[x];
            dfs(i);
        }
    }
}


int main()
{
    while(1)
    {
        isBipartite=true;

        for (int i=0; i<1000; i++)
            for (int j=0; j<1000; j++)
                g[i][j]=0;

        for (int i=0; i<1000; i++)
            color[i]=UNKNOWN;

        scanf("%d", &nodes);
        if (nodes==0)
            break;

        scanf("%d", &edges);
        while(edges--)
        {
            int u, v;
            scanf("%d %d", &u, &v);
            g[u][v]=1;
            g[v][u]=1;
        }
        
        color[0]=BLACK;
        dfs(0);

        if (isBipartite)
            printf("BIOCOLORABLE.\n");
        else
            printf("NOT BIOCOLORABLE.\n");
    }
}