// SWAPPING OF ELEMENTS IN AN ARRAY //
#include <stdio.h>
int main()
{
    int arr[26], temp;
    arr[0] = 12;
    arr[25] = 24;
    temp = arr[0];
    arr[0] = arr[25];
    arr[25] = temp;
    printf("\n %d and %d ", arr[0], arr[25]);
    return 0;
}