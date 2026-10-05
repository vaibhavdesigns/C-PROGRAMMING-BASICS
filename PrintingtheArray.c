// WRITE A PROGRAM TO PRINT THE ARRAY //
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i <= 4; i++)
    {
        printf("THE %d ELEMENT OF THE ARRAY IS  : %d \n", i + 1, arr[i]);
    }
    return 0;
}