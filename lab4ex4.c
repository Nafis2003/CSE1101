#include <stdio.h>
#include <math.h>

int main(){
    int n,q,r,s=0,l=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    q = n;
    while (q!=0)
    {
        q /= 10;
        l++;
    }

    q = n;
    while (q!=0)
    {
        r = q % 10;
        s += pow(r, l);
        q = q / 10;
    }
    printf("%d is%s a Armstrong number\n", n, n == s ? "" : " not");

    return 0;
}