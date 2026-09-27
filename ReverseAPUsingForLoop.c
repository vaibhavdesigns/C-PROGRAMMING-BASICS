// WAP TO DISPLAY 100, 97, 94, ... AP BY TAKING NUMBER OF TERMS FROM USER //

#include <stdio.h>

int main()
{
    int n;

    printf("ENTER THE NUMBER OF TERMS TILL WHICH TO DISPLAY THE AP : \n");
    scanf("%d", &n);

    printf("THE AP IS : \n");

    for (int i = 100; i >= (103 - 3 * n); i = i - 3)
    {
        printf("%d ", i);
    }

    return 0;
}