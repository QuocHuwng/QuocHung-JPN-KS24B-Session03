#include <stdio.h>
#define PI 3.14159  

int main() {
    float r, C, S; 
    printf("Nhap ban kinh hinh tron r: ");
    scanf("%f", &r);

    C = 2 * PI * r;
    S  = PI * r * r;
    printf("Chu vi hinh tron: %.2f\n", C);
    printf("Dien tich hinh tron: %.2f\n", S);

    return 0;
}
