#include "main.h"
#include <stdio.h>
/**
 * print_number - prints integer
 * @n: takes an integer
 * Return: void
 */
void print_number(int n)
{
unsigned int i = n;
if (n < 0)
{
i = -n;
putchar('-');
}
else
{
i = n;
}
if (i / 10 != 0)
{
print_number(i / 10);
putchar((i % 10) + '0');
}
}
