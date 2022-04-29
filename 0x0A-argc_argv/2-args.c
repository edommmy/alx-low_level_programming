#include "main.h"
/**
 * main - Entry point
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
int n;
if (argc > 0)
{
for (n = 0; n < argc; n++)
{
printf("%s\n", argv[n]);
}
}
return (0);
}
