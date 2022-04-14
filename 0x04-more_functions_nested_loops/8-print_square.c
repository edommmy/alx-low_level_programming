#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
int b;
int h;
for (b = 0; b < size; b++)
{
for (h = 0; h < size; h++)
{
putchar('#');
}
putchar('\n');
}
if (size <= 0)
{
putchar('\n');
}
}
