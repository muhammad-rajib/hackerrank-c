// Drawing Book

// Drawing Book

#include <stdio.h>
int main()
{
    int n=0, p=0, min;
    scanf("%d\n%d", &n, &p);

    min=(n/2)-(p/2);

    if(min>p/2)
        min=p/2;
    
    printf("%d",min);
    
    return 0;

}

// Another approch
/*
#include <stdio.h>

int main()
{
    int total_page, to_page, temp_page=0, from_first_page=0, from_last_page=0;

    scanf("%d\n%d", &total_page, &to_page);

    // count page number from first page of book
    for(int i=0; i<total_page; i++)
    {
        if (i==to_page)
        {
            from_first_page = i/2;
            break;
        }
    }

    // count page number from last page of book
    temp_page = total_page;
    for (int j=0; j<total_page; j++)
    {
        if (temp_page==to_page)
        {
            from_last_page = j/2;
            break;
        }
        temp_page -= 1;
    }

    if (from_first_page==from_last_page)
    {
        printf("%d", from_first_page);
    }
    else if(from_first_page<from_last_page)
        printf("%d", from_first_page);
    else    
    {
        printf("%d", from_last_page);
    }
        
    return 0;

}
*/