#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int tempA, tempB;
    tempA = *a;
    tempB = *b;
    *a = tempA + tempB;
    if (tempA>tempB)
        *b = tempA - tempB;
    else
        *b = tempB - tempA;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}