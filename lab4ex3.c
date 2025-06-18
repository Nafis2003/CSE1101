#include <stdio.h>
#include <math.h>
void repeat(char s[], int n){
    for (int i = 0; i < n;i++){
        printf("%s", s);
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    //Pattern 1
    for (int i = 0; i < n;i++){
        for (int j = 0; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    printf("\n\n\n");
    //Pattern 2
    for (int i = 0; i <n; i++)
    {
        repeat("  ",n-i-1);
        repeat("*   ", i + 1);
        printf("\n");
    }
    printf("\n\n\n");
    //Pattern 3
    for (int i = 0; i < n; i++)
    {
        repeat("\t", n - i - 1);
        repeat("*\t",i+1);
        printf("\n");
    }
    printf("\n\n\n");
    //Pattern 4
    for (int i = 0; i < 2*n-1; i++){
            i<n?repeat("  ",n-i-1):repeat("  ",i+1-n);
            i < n ? repeat("*   ", i + 1) : repeat("*   ", 2*n-i-1);
            printf("\n");
        }
        return 0;
}