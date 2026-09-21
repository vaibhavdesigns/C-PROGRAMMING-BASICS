#include <stdio.h>

int main()
{
    float km, meters, cm, feet, inches;
    printf("Enter distance between two cities in KM: ");
    scanf("%f", &km);

    meters = km * 1000.0;
    cm = meters * 100.0;
    feet = km * 3280.84;
    inches = feet * 12.0;

    printf("\n--- Distance Conversions ---\n");
    printf("Meters: %.2f m\n", meters);
    printf("Centimeters: %.2f cm\n", cm);
    printf("Feet: %.2f ft\n", feet);
    printf("Inches: %.2f in\n", inches);

    return 0;
}