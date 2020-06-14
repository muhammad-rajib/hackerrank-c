// Apple and Orange

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, 
                                int oranges_count, int* oranges)
{
    int fallApples=0, fallOranges=0;

    for (int i=0; i<apples_count; i++)
    {
        if(a+apples[i]>=s && a+apples[i]<=t)
        {
            fallApples += 1;
        }
    }

    for (int j=0; j<oranges_count; j++)
    {
        if(b+oranges >= s && b+oranges<=t)
        {
            fallOranges += 1;
        }
        
    }

    printf("%d\n%d", fallApples, fallOranges);

}