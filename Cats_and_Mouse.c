# include <stdio.h>

int main()
{
    int q, catA, catB, mouse, a, b;

    scanf("%d", &q);

    for (int i=0; i<q; i++)
    {
        scanf("%d %d %d", &catA, &catB, &mouse);

        a = abs(catA-mouse);
        b = abs(catB-mouse);

        if (a<b)
        {
            printf("Cat A");
        }
        else if (b<a)
        {
            printf("Cat B");
        }
        else
        {
            printf("Mouse C");
        }
        printf("\n");
    }   
}