#include "main.h"
/**
 *argstostr - cats all the arguments of the program
 *@ac: argument count
 *@av: argument vector
 *Return: pointer
 */
char *argstostr(int ac, char **av)
{
char *s;
int l, lt, x, y, z;
if (ac == 0 || av == NULL)
return (0);
l = 0, z = 0;
for (x = 0; x < ac; x++)
{
lt = 0;
while (av[x][lt])
lt++;
l += lt + 1;
}
s = malloc((l + 1) * sizeof(char));
if (s == 0)
return (0);
for (y = 0; y < ac; y++)
{
lt = 0;
while (av[y][lt])
{
*(s + z) = av[y][lt];
z++;
lt++;
}
*(s + z) = '\n';
z++;
}
*(s + z) = '\0';
return (s);
}
