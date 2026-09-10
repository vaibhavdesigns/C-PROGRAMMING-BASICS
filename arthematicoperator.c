#include <stdio.h>
int main()
{
    int x = 45, y = 74, sum, subtraction, division, modulus, multiplication;
    sum = x + y;
    subtraction = x - y;
    multiplication = x * y;
    modulus = x % y;
    division = x / y;
    printf("THE VALUES OF SUM , SUBTRACTION , MULTIPLICATION , DIVISION , MODULUS ARE : %d %d %d %d %d \n", sum, subtraction, multiplication, division, modulus);
    return 0;
}