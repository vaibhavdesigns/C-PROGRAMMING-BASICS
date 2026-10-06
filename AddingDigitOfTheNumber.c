#include <stdio.h>
int main()
{
    int num, temp, sum = 0;
    printf("ENTER THE NUMBER : \n");
    scanf("%d", &num);
    while (num > 0)
    {
        temp = num % 10;
        sum = sum + temp;
        num = num / 10;
    }
    printf("THE SUM OF THE DIGIT IS %d \n", sum);
    return 0;
}