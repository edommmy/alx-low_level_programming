#include "main.h"
/**
 *_strlen_recursion -  returns the length of a string
 *@s - pointer to string parameter
 *Return: recursion
 *On error, -1 is returned, and errno is set appropriately
 */
int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen_recursion(++s));
}
