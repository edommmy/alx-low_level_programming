#include "main.h"
/**
 *print_alphabet_x10 - print the alphabet 10 times in lower case
 *
 *Return: 0 Always
 */
void print_alphabet_x10(void)
{
int alphabet_x10 = 0, alphabet;
while (alphabet_x10 < 10)
{
for (alphabet = 97; alphabet <= 122; alphabet++)
{
_putchar(alphabet);
}
alphabet_x10++;
_putchar('\n');
}
}
