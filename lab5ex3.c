#include <stdio.h>
#include <math.h>

int main(){
    int n,bn=0,r,d,p;
    printf("Enter a decimal number : ");
    scanf("%d", &n);
    d = n;
    p = 1;
    while (d!=0)
    {
        r = d % 2;
        d = d / 2;
        bn = bn + r*pow(10,p-1);
        p++;
    }
    printf("%d in Binary is %d",n, bn);

    return 0;
}