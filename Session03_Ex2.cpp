#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Nhap nhiet do Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Nhiet do tuong ung theo Fahrenheit la: %.2f\n", fahrenheit);

    return 0;
}
