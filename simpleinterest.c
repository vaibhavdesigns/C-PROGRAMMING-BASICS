#include <stdio.h>
// ALSO TAKE THE INUT FROM THE USER BY SCANF FUNCTION , WE USE FORMAT SPECIFIER %f //
int main ()
{
    // USING FLOAT DATA TYPE TO FIND SIMPLE INTEREST //
    float principal , rate , time , si ;
    printf ("ENTER THE VALUE OF PRINCIPAL , RATE , TIME : \n");
    scanf("%f %f %f", &principal , &rate , &time);
    si = (principal*rate*time)/100 ;
    printf("THE SIMPLE INTREST IS: %f \n", si);
    return 0;
}