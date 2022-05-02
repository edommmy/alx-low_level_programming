#include "main.h"
/**
 *_strdup - returns a pointer to a new string
 *@str: string
 *Return: Pointer to string on success
 */
char *_strdup(char *str)
{
int x;
char *str1;
if (str == NULL)
return (NULL);
for (x = 0; str[x]; x++)
str1 = malloc(sizeof(char) * x);
if (str1 == NULL)
return (NULL);
for (x = 0; str[x] != '\0'; x++)
str1[x] = str[x];
str1[x] = '\0';
return (str1);
}
