#include "main.h"
/**
 *print_alphabet - prints alphabet in lowercase
 *A function that prints the alphabet in lowercase followed by a new line
 *Return: 0 Always
 */
void print_alphabet(void)
{
char alphabet;
for (alphabet = 97; alphabet <= 122; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
