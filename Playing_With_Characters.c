// Playing with Characters

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char ch;
    char s[100];
    char sen[100];

    scanf("%c%*c%s%*c", &ch,&s);
    scanf("%[^\n]%*c", &sen);

    printf("%c\n%s\n%s", ch, s, sen);

    return 0;
}