#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file = fopen("lab10ex1F.txt", "r");
    if (file == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    char c;
    int characters[256] = {0};
    printf("Case swapped text:\n");
    while ((c = fgetc(file)) != EOF)
    {
        // Case swapping
        if (isupper(c))
        {
            printf("%c", tolower(c));
        }
        else if (islower(c))
        {
            printf("%c", toupper(c));
        }
        else
        {
            printf("%c", c);
        }

        // Count frequency
        if (c >= 0 && c < 256)
        {
            characters[(int)c]++;
        }
    }
    fclose(file);


    for (int i = 0; i < 256; i++)
    {
        if (characters[i] > 0)
        {
            printf("\nCharacter '%c': %d", i, characters[i]);
        }
    }

    return 0;
}
