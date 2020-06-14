# include <stdio.h>
# include <string.h>

int main() 
{ 
    int ltrs[26], len, max = 1; 
    char str[10000];

    for (int i = 1; i <= 26; i++) 
        scanf("%d", &ltrs[i]); 

    scanf("%s", str);
    len = strlen(str);

    for (int j = 0; j <= len; j++) 
    { 
        if (ltrs[str[j] - '0' - 48] >= max) 
            max = ltrs[str[j] - '0' - 48]; 
    } 

    printf("%d", max * len); 
    return 0;
}