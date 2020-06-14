
// Complete the repeatedString function below.
long repeatedString(char* s, long n) {

    long count=0, reminder, rept, len, reminder_count=0;
    
    len = strlen(s);
    rept = n/len;
    reminder = n%len;

    for (int i=0; i<len; i++)
    {   
        if (s[i]=='a')
            count ++;
        if (s[i]=='a' && i<reminder)
            reminder_count++;
    }

    return (count*rept)+reminder_count;

}
