#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
int i;
int spc;
for (i = 0; i < n; i++)
{
for (spc = 0; spc < i; spc++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
