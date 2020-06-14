# include <stdio.h>

int main()
{
    int day, liked=0, person=5;

    scanf("%d", &day);

    for (int i=1; i<=day; i++)
    {
        liked += (person/2);
        person = (person/2)*3;

        if (day==i)
            break;
    }

    printf("%d", liked);

    return 0;

}