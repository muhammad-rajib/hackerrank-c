// 1D Array in C

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int value, num, total=0;
    scanf("%d", &value);
    int arr[value];
    for (int i=0; i<value; ++i)
    {
        scanf("%d", &arr[i]);
    }

    for (int j=0; j<value; ++j)
    {
        total = total + arr[j];
        //printf("%d\n", arr[j]);
    }

    printf("%d",total);

    return 0;
}