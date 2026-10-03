// WAP TO PRINT THE NUMBER OF DIGITS USING LOOP //
#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("ENTER THE NUMBER TO COUNT THE DIGITS : \n");
    scanf("%d", &n);
    while (n >= 0)
    {
        n = n / 10;
        count++;
    }
    return 0;
}