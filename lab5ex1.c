#include <stdio.h>

int main()
{
    int n, index, a[100];
    printf("Length of the array ?");
    scanf("%d", &n);

    printf("Enter the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the index of the number to delete : ");
    scanf("%d", &index);

    if (index < 0 || index >= n)
    {
        printf("Index is out of range\n");
    }
    else
    {
        for (int i = index; i<n; i++)
        {
            a[i] = a[i+1];
        }
    }
    printf("After deletion : \n");
    for (int j = 0; j < n-1; j++)
    {
        printf("%d ", a[j]);
    }
    return 0;
}