#include <stdio.h>

int main() {
    float temperature, converted_temperature;
    char unit1, unit2;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("Enter unit (C for Celsius, F for Fahrenheit): ");
    scanf(" %c", &unit1);

    printf("Enter unit to convert to (C for Celsius, F for Fahrenheit): ");
    scanf(" %c", &unit2);

    if (unit1 == 'C' && unit2 == 'F') {
        converted_temperature = (temperature * 9 / 5) + 32;
    } else if (unit1 == 'F' && unit2 == 'C') {
        converted_temperature = (temperature - 32) * 5 / 9;
    } else {
        printf("Invalid unit selection.\n");
        return 1;
    }

    printf("%.2f %c = %.2f %c\n", temperature, unit1, converted_temperature, unit2);

    return 0;
}
