#include <stdio.h>
#include <math.h>

int main()
{
    const float PI = 3.1416;
    float angle, angle_r;
    printf("Enter an angle : ");
    scanf("%f", &angle);
    angle_r = PI / 180 * angle;
    printf("sin(%.2f) = %.2f\n", angle, sin(angle_r));

    return 0;
}
