#include "main.h"
/**
 *_strlen_recursion -  returns the length of a string
 *@s - string
 *Return: recursion
 *On error, -1 is returned, and errno is set appropriately
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
s++;
return (1 + _strlen_recursion(s));
}
