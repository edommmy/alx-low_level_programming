#include <stdio.h>
/**
 *main - Entry point
 *Printing all possible combinations of single digits
 *Return: 0 Always
 */
int main(void)
{
int dgt;
for (dgt = 0; dgt <= 9; dgt++)
{
putchar((num % 10) + '0');
if (num == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return(0);
}
