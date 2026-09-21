#include <stdio.h>

int main()
{
    int x;

    printf("INPUT THE VALUE: ");
    scanf("%d", &x);

    if (x % 15 != 0)
    {
        if (x % 3 == 0)
        {
            printf("%d IS DIVISIBLE BY 3 BUT NOT BY 15.\n", x);
        }
        else
        {
            if (x % 5 == 0)
            {
                printf("%d IS DIVISIBLE BY 5 BUT NOT BY 15.\n", x);
            }
            else
            {
                printf("%d IS NOT DIVISIBLE BY 3 OR 5.\n", x);
            }
        }
    }
    else
    {
        printf("%d IS DIVISIBLE BY 15, SO CONDITION IS NOT VALID.\n", x);
    }

    return 0;
}