#include <stdio.h>
/**
 *main - Entry point
 *lowercase first and then uppercase
 *Return: Always
 */
int main(void)
{
int ch;
int CH;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (CH = 'A'; CH <= 'Z'; CH++)
{
putchar(CH);
}
putchar('\n');
return (0);
}

