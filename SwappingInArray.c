// SWAPPING OF ELEMENTS IN AN ARRAY //
#include <stdio.h>
int main()
{
    int arr[27], temp;
    arr[0] = 19;
    arr[25] = 90;
    temp = arr[0];
    arr[0] = arr[25];
    arr[25] = temp;
    printf("\n %d and %d ", arr[0], arr[25]);
    return 0;
} 
