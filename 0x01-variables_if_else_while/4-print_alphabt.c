#include <stdio.h>
/**
 *main - Entry point
 *exceptions are e and q
 *Return: Always 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e')
if (ch != 'q')
putchar(ch);
}
putchar('\n');
return (0);
}
