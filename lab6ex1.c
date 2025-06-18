#include <stdio.h>
#include <math.h>

float stdDeviation(int l,float arr[])
{
    float mean=0, v=0;

    //Mean value
    for (int i = 0; i < l;i++){
        mean += arr[i];
    }
    mean /= l;

    //variance
    for (int j = 0; j < l; j++){
        v+= pow(arr[j] - mean, 2);
    }
    
    v /= l;

    return sqrt(v);
}

int main()
{
    int l;
    printf("Length of the array : ");
    scanf("%d", &l);
    float arr[l];
    printf("Enter the array : ");
    for (int i = 0; i < l;i++){
        scanf("%f", &arr[i]);
    }
    
    printf("Standard deviation = %f", stdDeviation(l, arr));
    return 0;
}