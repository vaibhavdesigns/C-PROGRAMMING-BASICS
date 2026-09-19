#include <stdio.h>
int main()
{
    int a, b, c;
    printf("INPUT THE INTEGERS a,b,c : \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d IS GREATEST THAN %d and %d \n", a, b, c);
    }
    else if (b > a && b > c)
    {
        printf("%d IS GREATEST THAN %d and %d \n", b, a, c);
    }
    else if (c > a && c > b)
        ;
    {
        printf("%d IS GREATEST THAN %d and %d \n", c, a, b);
    }
    return 0;
}