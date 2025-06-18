#include <stdio.h>

int main() {
    const float pi = 3.1416;
    float r, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    area = pi * r * r;
    printf("Area of the circle: %.2f square unit\n", area);

    return 0;
}
