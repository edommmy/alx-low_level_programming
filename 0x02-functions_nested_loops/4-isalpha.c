#include "main.h"
/**
 *_isalpha - character comparison
 *@c: int to be pronted
 *Return: 0 Always
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || ( c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
