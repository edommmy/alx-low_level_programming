#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Print triangle dependent on the parameter size.
 * @size : The height of the triangle
 * Return: Void.
 */
void print_triangle(int size)
{
int i;
int n;
int spc;
for (i = 0; i < size; i++)
{
for (spc = size - 1 - i; spc > 0; spc--)
{
_putchar(' ');
}
for (n = 0; n <= i; n++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
