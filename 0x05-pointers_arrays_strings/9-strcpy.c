#include "main.h"
/**
 *_strcpy - copies string pointed by src
 *@dest: pointer to a char
 *@src: pointer to a char
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
