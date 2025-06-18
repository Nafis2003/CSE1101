#include <stdio.h>

int main(){
    int l,b=0,t;
    printf("Enter array length : ");
    scanf("%d", &l);
    int arr[l];
    printf("Enter the array : ");
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &arr[i]);
    }

    //BubbleSort
    for (int j = 0; j < l-1;j++){
        b = 0;
        for (int k = 0; k < l - j - 1;k++){
            if (arr[k]>arr[k+1]){
                t = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = t;
                b = 1;
            }

        }
        if (b==0){
            break;
        }
    }
    printf("Sorted Array :\n");
    for (int i = 0; i < l;i++){
        printf("%d ", arr[i]);
    }
        return 0;
}