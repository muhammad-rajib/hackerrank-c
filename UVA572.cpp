#include<stdio.h>

char grid[105][105];
int visited[105][105];
int total_oil_deposit=0;
int X[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int m, n;

void dfs(int a, int b){
    
    visited[a][b]=1;    
    int I,J;
    
    for(int i=0;i<8;i++){
        I=a+X[i];
        J=b+Y[i];
        if(I>=0 && I<m && J>=0 && J<n && !visited[I][J]){
            visited[I][J]=1;
            if(grid[I][J]=='@') dfs(I,J);
        }
    }
}

int main()
{
    char str[105];
    while (1)
    {
        scanf("%d %d", &m, &n);
        fgets(str, 105, stdin);
       
        if (m==0)
            break;

        // Empty every cell for new input
        for (int i=0; i<105; i++)
            for (int j=0; j<105; j++)
                grid[i][j]='\0';

        for (int i=0; i<m; i++)
        {
            fgets(str, 105, stdin);
            sscanf(str, "%s", grid[i]);
        }

        // visited false for all
        for (int i=0; i<105; i++)
            for (int j=0; j<105; j++)
                visited[i][j]=0;

        total_oil_deposit=0;

        for (int i=0; i<m; i++)
            for (int j=0; j<n; j++)
                if (grid[i][j]=='@' && visited[i][j]==0)
                {   
                    total_oil_deposit++;
                    dfs(i, j);
                }
        printf("%d\n", total_oil_deposit);
    }
    return 0;
}