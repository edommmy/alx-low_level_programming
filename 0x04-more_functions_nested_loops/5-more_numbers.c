#include "main.h"
#include <stdio.h>
/**
*more_numbers - prints 10 times the numbers, from 0 to 14
*
*Return: void
*/
void more_numbers(void)
{
int i;
int n;
for (n = 0; n < 10; n++)
{
i = 0;
while (i <= 14)
{
if (i >= 10)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
i++;
}
_putchar('\n');
}
}
