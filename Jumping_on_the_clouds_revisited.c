/*
# include <stdio.h>

int main()
{

    int n, jump, energy=100;

    scanf("%d %d", &n, &jump);

    int cloud[n];

    for (int i=0; i<n; i++)
    {
        scanf("%d", &cloud[i]);
    }

    int temp = jump;
    int index;
    
    while (jump > 0)
    {

        index = jump%10;
        if (cloud[index]==1)
        {
            energy -= 2;
            energy --;
        }
        else
        {
            energy --;
        }
        
        if (index==0)
        {
            break;
        }
        if (index>n-1)
        {
            break;
        }
        
        jump = jump + temp;
        //printf("%d ->", jump);
        

    }

    printf("%d", energy);

    return 0;
}
*/

# include <stdio.h>
int main()
{
    int n, k, energy=100;

    scanf("%d %d", &n, &k);

    char c[n];

    for (int i=0; i<n; i++)
    {
        scanf("%d", &c[i]);
    }

    int index = 0;

    do 
    {
        energy --;
        index = (index+k) % n;

        if (c[index]==1)
        {
            energy -= 2;
        }

    }while ( index != 0);
    
    printf("%d", energy);

    return 0;

}