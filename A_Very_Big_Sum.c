// A Very Big Sum

long aVeryBigSum(int ar_count, long* ar)
{
    long totalSum = 0;

    for (int i=0; i<ar_count; i++)
    {
        totalSum += ar[i];
    }

    return totalSum;
}