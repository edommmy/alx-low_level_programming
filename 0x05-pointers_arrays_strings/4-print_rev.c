#include "main.h"
/**
 *print_rev - prints string in reverse
 *@s: input string
 *Return: no return
 */
void print_rev(char *s)
{
int cnt = 0;
while (*s != '\0')
{
s++;
cnt++;
}
while (cnt > 0)
{
s--;
_putchar(*s);
cnt--;
}
_putchar('\n');
}
