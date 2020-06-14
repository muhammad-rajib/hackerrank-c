#include <stdio.h>

int library_fine(int d1, int d2, int m1, int m2, int y1, int y2)
{
    int fine=0;
    
    if (y1>y2)
        return fine=10000;
    
    if (y1==y2)
    {
        if (m1>m2)
        {
            fine = 500 * (m1-m2);
            return fine;
        }
        if (m1==m2 && d1>d2)
        {
            fine = 15 * (d1-d2);
            return fine;
        }
    }
    
    return fine;
}

int main()
{
    int d1, d2, m1, m2, y1, y2, fine;

    scanf("%d %d %d", &d1, &m1, &y1);
    scanf("%d %d %d", &d2, &m2, &y2);

    fine = library_fine(d1, d2, m1, m2, y1, y2);

    printf("%d", fine);
    
    return 0;

 }