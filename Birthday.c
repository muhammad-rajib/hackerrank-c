// Complete the birthday function below.
int birthday(int s_count, int* s, int d, int m) {

    int slicesSum=0, index=0, satisfied_bar=0;
    
    // if month equals to 1
    if (m==1)
    {
        for (int i=0; i<s_count; i++)
        {
            if (s[i]==d)
            {
                satisfied_bar += 1;   
            }
        }
    }
    
    // if month more than one
    if(m>1)
    {
        for (int i=0; i<s_count; i++)
        {
            index = i;
            slicesSum=0;
            for (int j=0; j<m; j++)
            {
                slicesSum += s[index];
                index += 1;
            }
            if (slicesSum==d)
            {
                satisfied_bar += 1;
            }
        }
    }
    
    return satisfied_bar;

}
