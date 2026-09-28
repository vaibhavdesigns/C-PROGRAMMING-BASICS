#include <stdio.h>
int main()
{
    int n;
    int a = 0;
    printf("ENTER THE NUMBER TO CHECK WHETHER ITS PRIME OR NOT : \n");
    scanf("%d", &n);
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
        }
    }
    if (n == 1)
        printf("THE NUMBER IS NOT PRIME \n");
    else if (a == 1)
        printf("THE NMBER IS NOT PRIME \n");
    else
        printf("THE NUMBER IS PRIME \n");
}