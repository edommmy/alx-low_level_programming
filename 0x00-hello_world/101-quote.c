#include <unistd.h>
/**
*main - Entry point
*Printing a string without using printf or puts commands
*Return: 1 after printing string
*/
int main(void)
{
write(2,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
59);
return (1);
}
