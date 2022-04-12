#include "main.h"
/**
 *print_sign - return 0 for 0, 1 for positive and -1 for negative
 *@n: int to be pronted
 *Return: 0 Always
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
