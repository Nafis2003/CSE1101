#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("Enter a,b,c :");
    scanf("%f %f %f", &a,&b,&c);
    d = b*b - 4*a*c;
    if (d>=0)
    {
        x1 = (-b + pow(d, 0.5)) / (2*a);
        x2 = (-b - pow(d, 0.5)) / (2*a);
        printf("\nx1=%.4f\nx2=%.4f\n", x1, x2);
    }
    else
    {
        printf("The equation doesn't have any real root");
    }
    return 0;
}