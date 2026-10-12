#include <stdio.h>

int main() {
    // 1. Declare and initialize an array of 5 integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // 2. Calculate the number of elements in the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array elements are:\n");

    // 3. Use a for loop to iterate through the array and print each element
    for (int i = 0; i < size; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    return 0;
}