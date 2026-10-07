#include <stdio.h>
int main()
{
    int n, temp, fact = 1;
    printf("ENTER THE NUMBER : \n");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        temp = i;
        fact = fact * temp;
    }
    printf("THE FACTORIAL OF %d IS : \n %d", n, fact);
    return 0;
}