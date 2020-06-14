# include <stdio.h>

int main()
{

    int n, id;
    scanf("%d", &n);

    int arr[n], birds[6] = {0};

    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        birds[arr[i]] += 1;
    }

    int max = birds[1];
    for (int i=2; i<6; i++)
    {
        if(max < birds[i])
        {
            max = birds[i];
            id = i;
        }
    }

    printf("%d", id);

    return 0;

}