#include "main.h"
/**
 *puts2 - prints every other char of a string
 *@str: type
 *
 */
void puts2(char *str)
{
int x, y = 0;
while (str[x] != '\0')
{
x++;
}
while (y < x)
{
_putchar(str[y]);
y = y + 2;
}
_putchar('\n');
}
