// Sum and Difference of Two number

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int intNum1, intNum2;
    float DecimalNum1, DecimalNum2;

    scanf("%d %d", &intNum1, &intNum2);
    scanf("%f %f", &DecimalNum1, &DecimalNum2);

    printf("%d %d\n", intNum1+intNum2, intNum1-intNum2);
    printf("%.1f %.1f", DecimalNum1+DecimalNum2, DecimalNum1-DecimalNum2);

    return 0;
}