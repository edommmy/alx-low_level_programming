#include "main.h"
/**
 *times_table - prints time table
 *
 *Return: 0 Always
 */
void times_table(void)
{
int a;
int b;
int r;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
r = a * b;
if ((r / 10) == 0)
{
if (b == 0)
{
_putchar ('0');
}
if (b != 0)
{
_putchar (' ');
_putchar ((r % 10) + '0');
}
if (b < 9)
{
_putchar (',');
_putchar (' ');
}
}
else
{
_putchar ((r / 10) + '0');
_putchar ((r % 10) + '0');
if (b > 9)
{
_putchar (',');
_putchar (' ');
}
}
}
_putchar ('\n');
}
}
		
