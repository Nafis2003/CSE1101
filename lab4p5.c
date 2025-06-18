#include <stdio.h>

int gcd(int a,int b){
    int t;
    while(b){
        a = a % b;
        t = b;
        b = a;
        a = t;
    }
    return a;
}

int main(){
    int a, b,g,l;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    g= gcd(a, b);
    l = (a * b) / g;
    printf("GCD = %d\nLCM = %d\n", g,l);
    return 0;
}