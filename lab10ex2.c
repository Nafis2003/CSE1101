#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int f, t;
    for (int i = 0; i < n - 1; i++)
    {
        f = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                f = 1;
            }
        }
        if (f == 0)
        {
            break;
        }
    }
}
int main()
{
    FILE *file = fopen("lab10ex2F.txt","r");
    FILE *outfile = fopen("lab10ex2FOut.txt","w");
    if (file == NULL || outfile == NULL)
    {
        printf("File not found\n");
        return 1;
    }
    int arr[1000];
    int n,i=0;
    while (fscanf(file,"%d",&n)!=EOF)
    {
        arr[i] = n;
        i++;
    }
    fclose(file);
    bubbleSort(arr, 1000);
    printf("Sorted successfully");
    for (int j = 0; j < i;j++){
        fprintf(outfile, "%d ", arr[j]);
    }
    fclose(outfile);

    return 0;
}