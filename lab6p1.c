#include <stdio.h>

int max(int a, int b, int c){
    return (a > b && a > c) ? a : (b > c && b > a) ? b: c;
}

int main(){
    int a, b, c;
    printf("Enter a,b,c : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d", max(a, b, c));
    return 0;
}