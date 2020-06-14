# include <stdio.h>
# include <string.h>

int main()
{
    char s[1001];
    int a[10]={0};
    scanf("%[^\n]%*c", s);

    for (int i=0; i<strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            a[s[i]-'0']++;
        }
    }

    for (int i=0; i<10; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}