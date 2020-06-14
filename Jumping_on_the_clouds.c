# include <stdio.h>

int main()
{
    int n,arr[102],count = 0;
    scanf("%d", &n);
 
    for(int j = 0; j < n; j++)
        scanf("%d", &arr[j]);
 
    for(int i = 1; i < n; count++)
    {
        printf("%d:", count);
        if(arr[i+1] != 1 && i < n-1)
            i+=2;
        else i++;
        printf("|%d|", i);
    }
    printf("\n%d", count);
    return 0;
}