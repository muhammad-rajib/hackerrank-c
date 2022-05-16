#include <stdio.h>
#define Max 100

int n;
int visited[Max];
int graph[Max][Max];

void dfs(int a)
{
    for (int i=1; i<n+1; i++)
        if (graph[a][i] == 1)
            if (visited[i] != 1)
            {
                visited[i] = 1;
                dfs(i);
            }
}

int main()
{
    int a, b, m;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;

        for (int i=0; i<n+1; i++)
            for (int j=0; j<n+1; j++)
                graph[i][j] = 0;

        while (1)
        {
            scanf("%d", &a);
            if (a == 0)
                break;
            
            while (1)
            {
                scanf("%d", &b);
                if (b == 0)
                    break;
                graph[a][b] = 1;
            }
        }

        scanf("%d", &m);

        for (int i=0; i<m; i++)
        {
            scanf("%d", &a);
            
            for (int i=0; i<Max; i++)
                visited[i] = 0;

            dfs(a);

            int cnt = 0;
            for (int i=1; i<=n; i++)
                if (visited[i] != 1)
                    cnt++;

            printf("%d", cnt);

            for (int i=1; i<n+1; i++)
                if (visited[i] == 0)
                    printf(" %d", i);
    
            printf("\n");
        }
    }
    return 0;
}

// #include<cstdio>
// #include<vector>
// #include<queue>

// using namespace std;

// int n;
// vector< vector<int> > L;
// bool visited[100];

// void unreachable(int v){
//     fill(visited,visited+n,false);
    
//     queue<int> Q;
//     Q.push(v);
    
//     int aux;
    
//     while(!Q.empty()){
//         aux=Q.front();
//         Q.pop();
        
//         for(int i=0;i<L[aux].size();i++){
//             if(visited[L[aux][i]]) continue;
//             visited[L[aux][i]]=true;
//             Q.push(L[aux][i]);
//         }
//     }
    
//     int cont=0;
    
//     for(int i=0;i<n;i++) if(!visited[i]) cont++;
    
//     printf("%d",cont);
    
//     for(int i=0;i<n;i++) if(!visited[i]) printf(" %d",i+1);
//     printf("\n");
// }

// int main(){
//     int a,b,m;
    
//     while(1){
//         scanf("%d",&n);
//         if(n==0) break;
        
//         L.clear();
//         L.resize(n);
        
//         while(1){
//             scanf("%d",&a);
//             if(a==0) break;
            
//             while(1){
//                 scanf("%d",&b);
//                 if(b==0) break;
                
//                 L[a-1].push_back(b-1);
//             }            
//         }
        
//         scanf("%d",&m);
            
//         for(int i=0;i<m;i++){
//             scanf("%d",&a);
//             unreachable(a-1);
//         }
//     }
    
//     return 0;
// }