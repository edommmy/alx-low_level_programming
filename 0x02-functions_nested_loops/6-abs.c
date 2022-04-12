#include "main.h"
#include <stdio.h>
/**
 * _abs - absolute value
 * @n: int to be pronted
 * Return: 0 Always
 */
int _abs(int n)
{
if (n < 0)
{
return (n * (-1));
}
else if (n > 0)
{
return (n);
}
else
{
return (0);
}
