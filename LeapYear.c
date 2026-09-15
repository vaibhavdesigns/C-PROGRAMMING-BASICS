// WAP TO FIND THE YEAR IS A LEAP YEAR OR NOT //
#include <stdio.h>
int main()
{
    int year;
    printf("INPUT THE YEAR : \n");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("THE YEAR IS AN LEAP YEAR. \n");
    }
    else
    {
        printf("THE YEAR IS  NOT AN LEAP YEAR. \n");
    }
}