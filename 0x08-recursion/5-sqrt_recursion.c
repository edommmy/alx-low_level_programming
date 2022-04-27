#include "main.h"
/**
 * sqrNum - function does the sqr root of a number
 * @x: number input
 * @i: variable
 * Return: 1 On success
 * On error, -1 is returned, and errno is set appropriately
 */
int sqrNum(int a, int b)
{
if (a == (b * b))
return (b);
else if (a > ( b * b))
return (sqrNum(a, b + 1));
else
return (-1);
}
/**
 * _sqrt_recursion - function returns square root of a number
 * @n: number
 * Return: int
 * On error, -1 is returned, and errno is set appropriately
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
if (n == 1)
return (1);
if (n < 0)
return (-1);
return (sqrNum(n, 1));
}
