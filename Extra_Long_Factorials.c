// Extra Long Factorials
# include <stdio.h>

int main()
{
    int n, val[500], size;
    scanf("%d", &n);
    val[0]=1;
    size = 1;
    
    for (int i=2; i<=n; i++)
    {
        int cary = 0;
        for (int j=0; j<size; j++)
        {   //printf("%d\n", val[j]);
            int pod = val[j]*i+cary;
            val[j] = pod%10;
            cary = pod/10;
            //printf("cary: %d\n", cary);
        }

        while(cary)
        {   
            printf("size:%d\n", size);
            val[size] = cary%10;
            cary = cary/10;
            printf("val[size]: %d\n", val[size]);
            size++;
        }
        //printf("cary:%d ---> size:%d ---> val[size]:%d\n", cary, size, val[size]);
    }

    for (int i=size-1; i>=0; i--)
    {
        printf("%d", val[i]);
    }
    scanf("\n");
    return 0;
}
