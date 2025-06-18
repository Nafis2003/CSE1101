#include <stdio.h>
#include <math.h>

int main(){
    float angle, angle_r,cosine,sec,tangent,cosec;
    const float PI = 3.1416;
    printf("Enter an angle in degree: ");
    scanf("%f",&angle);
    angle_r = PI / 180 * angle;

    cosec = 1 / sin(angle_r);
    cosine = cos(angle_r);
    tangent = tan(angle_r);
    sec = 1 / cosine;

    printf("cos(%.2f) = %.2f\n", angle, cosine);
    printf("sec(%.2f) = %.2f\n", angle, sec);
    printf("tan(%.2f) = %.2f\n", angle, tangent);
    printf("cosec(%.2f) = %.2f\n", angle, cosec);

    return 0;
}