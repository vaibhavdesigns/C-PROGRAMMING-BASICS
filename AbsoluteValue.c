// WAP TO PRINT ABSOLUTE VALUE OF AN INTEGER //
#include <stdio.h>
int main()
{
    int x;
    printf("ENTER THE VALUE  : \n");
    scanf("%d", &x);
    if (x < 0)
    {
        x = x * (-1);
        printf("THE ABSOLUTE VALUE OF THE INTEGER IS : %d", x);
    }
    else
    {
        printf("THE ABSOLUTE VALUE OF AN INTEGER IS : \n %d", x);
    }
    return 0;
}