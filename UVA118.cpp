#include <stdio.h>
#define Max 55

bool table[Max][Max];
char directions[] = {'N', 'E', 'S', 'W'};
int xChange[] = {0, 1, 0, -1};
int yChange[] = {1, 0, -1, 0};

int main()
{
    int xSize, ySize;
    scanf("%d %d", &xSize, &ySize);

    int x, y;
    char start_direction;
    char arr[100], ex[10];

    while (scanf("%d %d %c %s", &x, &y, &start_direction, arr))
    {
        int direction;

        for (int i=0; i<4; i++)
            if (start_direction == directions[i])
                direction = i;

        bool died = false;

        for (int i=0; i<arr[i]; i++)
        {
            if (arr[i] == 'R')
                direction = (direction+1) % 4;
            else if (arr[i] == 'L')
                direction = (direction+3) % 4;
            else
            {
                if (x+xChange[direction] == -1 || x + xChange[direction] == xSize + 1 || y + yChange[direction] == -1 || y + yChange[direction] == ySize + 1)
                {
                    if (!table[y][x])
                    {
                        table[y][x] = died = true;
                        break;
                    }
                }
                else
                {
                    x += xChange[direction];
                    y += yChange[direction];
                }
            }
        }
        printf("%d %d %c ", x, y, directions[direction]);
        if (died)
            printf("LOST");
        printf("\n");
    }
    return 0;
}
  
