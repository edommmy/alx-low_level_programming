#include "main.h"
#include <stdio.h>
/**
 *print_last_digit - last digit
 *@n : int to be pronted
 *Return: 0 Always
 */
int print_last_digit(int)
{
int last_digit;
if (n < 0)
{
last_digit = (-1 * (n % 10));
_putchar (last_digit + '0');
return (last_digit);
}
else
{
last_digit = (n % 10);
_putchar (last_digit + '0');
return (last_digit);
}
}
