// WAP WITH NESTED LOOPS TO CHECK DIVISIBLE BY 3 OR 5 BUT NOT 15 //
#include <stdio.h>
int main()
{
    int x;
    printf("INPUT THE VALUE : \n ");
    scanf("%d", &x);
    if (x % 15 = !0)
    {
        if (x % 3 == 0)
        {
            if (x % 5 == 0)
            {
                printf("THE %d IS DIVISIBLE BY 5");
            }
            else
            {

                printf("THE %d IS NOT DIVISIBLE BY 5");
            }
        }
        else
        {
            printf("THE %d IS NOT DIVISIBLE BY 3");
        }
    }
    else
        (
            printf("conditiion not valid \n");)
}