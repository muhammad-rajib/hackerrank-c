#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    unsigned long long int b, w, x, y, z, res;
    scanf("%d", &n);

    for (int i=1; i<= n; i++)
    {
        scanf("%llu %llu", &b, &w);
        scanf("%llu %llu %llu", &x, &y, &z);
        if (x + z <= y) {
            res = (b + w) * x + w * z;
        } else if (y + z <= x) {
            res = b * z + (b + w) * y;
        } else {
            res = b * x + w * y;
        }
        printf("%llu\n", res);
    }
    return 0;
}