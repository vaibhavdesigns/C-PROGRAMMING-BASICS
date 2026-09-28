// WAP TO WRITE THE COMPOSITE NUMBER OR NOT //
// COMPOSITE NUMBER : NUMBER WHICH DIVISIBLE Y TWO OR MORE NUMBERS //
#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            printf("THE NUMBER IS COMPOSITE \n");
        }
        else
        {
            printf("THE NUMBER IS NOT COMPOSITE \n");
        }
        break;
        // USING BREAK SO IT CHECKS FOR THE VERY FIRST TIME AND PRINTS IT //
    }
    return 0;
}