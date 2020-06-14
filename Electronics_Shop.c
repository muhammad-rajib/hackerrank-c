#include <stdio.h>

int main()
{
    long budget;
    int k_number, m_number;
    long price = -1;
    int k_array[1000], m_array[1000];

    scanf("%ld %d %d", &budget, &k_number, &m_number);

    // input keyboard models
    for (int i=0; i<k_number; i++)
    {
        scanf("%d", &k_array[i]);
    }
    // input mouse models
    for (int i=0; i<m_number; i++)
    {
        scanf("%d", &m_array[i]);
    }

    for (int i=0; i<k_number; i++)
    {
        for (int j=0; j<m_number; j++)
        {
            if (k_array[i] + m_array[j] > price && k_array[i] + m_array[j] <= budget)
            {
                price = k_array[i] + m_array[j];
            }
        }
    }

    printf("%ld", price);

    return 0;
}