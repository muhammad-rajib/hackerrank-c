#include<stdio.h>

char state[1005][1005];
int output_no=1;
int height, weight;
int l_count[505];
char letter;

void dfs(int x, int y)
{
    if (x<0 || x>=height || y<0 || y>=weight)
        return;

    if (state[x][y]=='*')
        return;

    if (state[x][y] != letter)
        return;

    state[x][y]='*';
    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);
}

struct val{
    char word;
    int container=0;
};

int main()
{
    int test_case;
    scanf("%d", &test_case);
    
    while(test_case--)
    {
        for (int i=0; i<505; i++)
            l_count[i]=0;

        for (int i=0; i<1005; i++)
            for (int j=0; j<1005; j++)
                state[i][j]='\0';

        val v[30];

        scanf("%d %d ", &height, &weight);
        for (int i=0; i<height; i++)
            scanf("%[^\n]%*c", &state[i]);
        
        for (int i=0; i<height; i++)
            for (int j=0; j<weight; j++)
                if (state[i][j]!='*')
                {
                    letter = state[i][j];
                    dfs(i, j);
                    l_count[letter-'a']++;
                }

        int k=0;
        for (int i=0; i<26; i++)
            if (l_count[i] != 0)
            {
                v[k].word = 'a'+i;
                v[k].container = l_count[i];
                k++;
            }

        // Implement a sort function
        val temp;
        for (int i=0; i<25; i++)
        {
            temp = v[i];
            if (temp.container != 0)
            {
                for (int j=i+1; j<26; j++)
                {
                    if (v[j].container != 0)
                    {
                        if (temp.container == v[j].container)
                        {
                            if (temp.word < v[j].word)
                                continue;
                            else
                            {
                                v[i] = v[j];
                                v[j] = temp;
                                break;
                            }
                        }
                        else
                        {
                            if (temp.container > v[j].container)
                                continue;
                            else
                            {
                                v[i] = v[j];
                                v[j] = temp;
                                break;
                            }
                            
                        }
                    }
                }
            }
        }
                
        printf("World #%d\n", output_no);
        output_no++;

        for (int i=0; i<k; i++)
            if (v[i].container != 0)
                printf("%c: %d\n", v[i].word, v[i].container);
    }
    return 0;
}
