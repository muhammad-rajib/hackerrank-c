// Mini-Max Sum

# include <stdio.h>

int main()
{
    long long arr[5];
    
    for (int i=0; i<5; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long total=0, max=0, min=1000000000;

    for (int i=0; i<5; ++i)
    {   
        total += arr[i];

        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    long long min_sum = total-max;
    long long max_sum = total-min;
    printf("%lld %lld", min_sum, max_sum);

    return 0;

}



/*
// Mini-Max Sum
// This solution failed to pass some test cases
# include <stdio.h>

int sum_of_array(int index, long long arr[5])
{
    long long sum=0;

    for (int i=0; i<5; i++)
    {
        if (index != i)
        {
            sum += arr[i];
        }
    }

    return sum;
}

int main()
{
    long long mini_sum=1000000000, max_sum=0, func_sum=0;

    long long n, arr[5];
    long long sum_arr[5];

    // input
    for (int i=0; i<5; i++)
    {
        scanf("%lld", &n);
        if (n>=1)
            arr[i] = n;
    }
    
    // sum the numbers of array
    for (int i=0; i<5; i++)
    {
        func_sum = sum_of_array(i, arr);
        sum_arr[i] = func_sum;
    }

    // output
    for (int i=0; i<5; i++)
    {
        if (sum_arr[i] > max_sum)
            max_sum = sum_arr[i];

        if (sum_arr[i] < mini_sum)
            mini_sum = sum_arr[i];
    }


    printf("%lld %lld", mini_sum, max_sum);

    return 0;

}
*/
