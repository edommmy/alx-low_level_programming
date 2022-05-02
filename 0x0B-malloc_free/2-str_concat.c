#include "main.h"
/**
 *str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: Pointer On success and NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int x = 0, y = 0, z = 0;
if (s1 != NULL)
for (; s1[x]; x++)
;
if (s2 != NULL)
for (; s2[y]; y++)
;
s = malloc(sizeof(char) * (x + y + 1));
if (s == NULL)
return (NULL);
while (z < i)
{
s[z] = s1[z];
k++;
}
while (z < x + y)
{
s[z] = s2[z - x];
z++;
}
s[z] = '\0';
return (s);
}
