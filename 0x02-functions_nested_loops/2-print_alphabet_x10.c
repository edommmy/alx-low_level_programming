#include "main.h"
/**
 *main - Entry point
 *A function to print the alphabet 10 times in lower case
 *Return: 0 Always
 */
void print_alphabet_x10(void)
{
char alphabet;
char alphabet_x10;
for (alphabet_x10 < 10)
{
for (alphabet = 97; alphabet <= 122; alphabet++)
{
_putchar(alphabet);
}
}
_putchar('\n')
}