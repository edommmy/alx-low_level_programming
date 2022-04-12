#include "main.h"
/**
 *print_time_table - print time table for n
 *@n: multiplication table request
 *Return: 0 Always
 */
void print_times_table(int n)
{
int b, h, r;
if (!(n > 15 || n < 0))
{
for (b = 0; b <= n; b++)
{
for (h = 0; h <= n; h++)
{
r = b * h;
if (h != 0)
{
_putchar(',');
_putchar(' ');
}
if (r < 10 && h != 0)
{
_putchar(' ');
_putchar(' ');
_putchar((r % 10) + '0');
}
else if (r >= 10 && r < 100)
{
_putchar(' ');
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
}
else if (r >= 100 & h != 0)
{
_putchar((r / 100) + '0');
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
}
else
{
_putchar((r%10) + '0');
}
}
_putchar('\n');
}
}
}
