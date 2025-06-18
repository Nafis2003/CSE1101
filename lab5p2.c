#include <stdio.h>

int main(){
    int n,index,nn,a[100];
    printf("How many numbers you want to add ?");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position to insert : ");
    scanf("%d", &index);

    if(index<0 || index>=n){
        printf("Can't insert\n");
    }
    else
    {
        printf("Enter the number to insert : ");
        scanf("%d", &nn);
        for (int i = n-1; i>=index; i--)
        {
            a[i + 1] = a[i];
        }
        a[index] = nn;
    }
    printf("After insertion : \n");
    for (int j = 0; j <=n;j++){
        printf("%d ", a[j]);
    }
    return 0;
}