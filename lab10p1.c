#include <stdio.h>

int main(){
    FILE *file = fopen("lab10.txt", "r");
    int nums[1024],n;
    printf("How many numbers you want to read ? ");
    scanf("%d",&n);
    for (int i = 0; i < n;i++)
    {
        fscanf(file, "%d", &nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}