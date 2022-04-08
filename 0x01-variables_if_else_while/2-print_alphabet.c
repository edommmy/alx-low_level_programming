#include <stdio.h>
/**
 *main - Entry point
 *using putchar
 *Return: 0 Always
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
