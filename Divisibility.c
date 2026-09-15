// WAP TO CHECK WHETHER THE NUMBER IS DIVISIBLE BY 5 OR NOT //
#include <stdio.h>
int main()
{
    int num;
    printf("ENTER THE NUMBER : \n");
 scanf("%d", &num);
    if (num % 5 == 0)
    {
        printf("THE NUMBER IS DIVISIBLE BY 5 \n");
    }
    else
    {
        printf("THE NUMBER IS NOT DIVISIBLE BY 5 \n");
    }
    return 0;
}