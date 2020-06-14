// Complete the bonAppetit function below.
void bonAppetit(int bill_count, int* bill, int k, int b) {

    int charged=0, totalBill=0;
    
    for (int i=0; i<bill_count; i++)
    {
        if (i != k)
        {
            totalBill += bill[i];
        }
    }
    
    if (b == totalBill/2)
    {
        printf("Bon Appetit");
    }
    else
    {
        printf("%d",b-totalBill/2);    
    }
}
