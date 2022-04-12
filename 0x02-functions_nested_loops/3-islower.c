#include "main.h"
/**
 *_islower - character comparision
 *@c: values to be compared
 *Return: 0 Always
 */
int _islower(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}
else
{
return (0);
}
}
