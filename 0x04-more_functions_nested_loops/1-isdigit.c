#include "main.h"
#include <stdio.h>
/**
*_isdigit - Checks for a digit (0 through 9)
*@c: Integer representing an ASCII character
*Return: 1 if it is a digit, 0 if not
*/
int _isdigit(int c)
{
while (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
