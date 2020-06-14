// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(int ar_count, int* ar) {
    
    int tallest_candle=0, total_tallest_candle=0;
    for (int i=0; i<ar_count; i++)
    {
        if (ar[i] > tallest_candle)
            tallest_candle = ar[i];
    }
    
    for (int j=0; j<ar_count; j++)
    {
        if (tallest_candle==ar[j])
            total_tallest_candle += 1;
    }
    
    return total_tallest_candle;
}