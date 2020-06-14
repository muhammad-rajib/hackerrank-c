# include <stdio.h>
# include <string.h>

int main()
{
    int n, sum=0;
    char gender;

    scanf("%d", &n);

    int marks[n];

    for (int i=0; i<n; i++)
    {
        scanf("%d", &marks[i]);
    }

    scanf(" %c", &gender);

    if (gender=='b')
    {
        for (int i=0; i<n; i+=2)
        {
            sum += marks[i];
        }
    }
    else
    {
        for (int i=1; i<n; i+=2)
        {
            //printf("%d", marks[i]);
            sum += marks[i];
        }
    }

    printf("%d", sum);
    
    return 0;

}

/*
int marks_summation(int* marks, int number_of_students, char gender)
{
    int sum = 0;
    
    if(gender == 'b'){
        for(int i = 0; i < number_of_students; i += 2)
            sum += marks[i];
    }
    else{
        for(int i = 1; i < number_of_students; i += 2)
            sum += marks[i];
    }
    
    return sum;
}
*/