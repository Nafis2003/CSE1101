#include <stdio.h>

char *strchr_custom(char *str, char c)
{
  while (*str)
  {
    if (*str == c)
    {
      return str; // Return the pointer to the character
    }
    str++;
  }
  return NULL; // Return NULL if the character is not found
}

int main()
{
  char s[] = "hello world";
  char *result = strchr_custom(s, 'o');

  if (result)
  {
    printf("Character found at: %s\n", result);
  }
  else
  {
    printf("Character not found\n");
  }
  return 0;
}
