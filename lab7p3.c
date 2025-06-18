#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr,*n,*t;
    n = (int *)malloc(sizeof(int));
    t = (int *)malloc(sizeof(int));
    printf("Length of the array : ");
    scanf("%d", n);
    arr = (int *)malloc(*n * sizeof(int));
    printf("Enter the array : ");
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", arr + i);
    }

    //Bubble sort
    for (int i = 0; i < *n - 1;i++){
        int b = 0;
        for (int j = 0; j < *n - i - 1;j++){

            if(*(arr+j)>*(arr+j+1)){
                *t = *(arr + j);
                *(arr + j) = *(arr + j+1);
                *(arr + j+1) = *t;
                b = 1;
            }
        }
        if(b==0){
            break;
        }
    }

    for (int i = 0; i < *n; i++)
    {
        printf("%d ", *(arr + i));
    }

        return 0;
}