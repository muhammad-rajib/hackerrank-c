#include<bits/stdc++.h>
using namespace std;

vector <int> adj[1001];
vector <int> rev[1001];
stack <int> S;
int visited[1001];
int nodes;
int total_ssc=0;

void DFS1(int i)
{
    visited[i]=1;
    for (int j: adj[i])
        if (!visited[j])
            DFS1(j);
    
    S.push(i);
}

void reverse()
{
    for (int i=0; i<nodes; i++)
        for (int j: adj[i])
            rev[j].push_back(i);

}

void DFS2(int i)
{
    cout << i << " ";
    visited[i]=1;
    for (int j: rev[i])
        if (!visited[j])
            DFS2(j);
}

// Kosaraju's Algorithm
void find_SSC()
{
    // visited false for all nodes
    for (int i=0; i<nodes; i++)
        visited[i]=0;

    for (int i=0; i<nodes; i++)
        if (!visited[i])
            DFS1(i);

    // reverse graph
    reverse();
    
    // visited false for all nodes
    for (int i=0; i<nodes; i++)
        visited[i]=0;

    cout << "Strongly connected component are:\n";
    while(!S.empty())
    {
        int curr = S.top();
        S.pop();
        if (!visited[curr])
        {
            DFS2(curr);
            total_ssc++;
            cout << endl;
        }
    }
}

int main()
{
    int u, v, vertices;
    while(1)
    {
        scanf("%d %d", &nodes, &vertices);
        if (nodes==0)
            break;

        for (int i=0; i<vertices; i++)
        {
            scanf("%d %d", &u, &v);
            // for directed graph
            adj[u].push_back(v);
            
            // // for undirected graph
            // adj[u].push_back(v);
            // adj[v].push_back(u);
        }

        find_SSC();
        cout << "Total Strongly connected compent number: " << total_ssc << endl;
    }
    return 0;
}