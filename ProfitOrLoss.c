// WAP TO DETERMINE WHETHER THE SHOPKEEPER HAS HAS MADE PROFIT OR LOSS //
#include <stdio.h>
int main()
{
    float cp, sp, profit, loss;
    printf("ENTER THE COST PRICE : \n");
    scanf("%.2f", &cp);
    printf("ENTER THE SELLING PRICE : \n");
    scanf("%.2f", &sp);

    if (cp > sp)
    {
        printf("PROFIT\n");
    }
    else
    {
        printf("LOSS\n");
    }
    return 0;


}