#include "main.h"
/**
 *_isalpha(int c) - character comparison
 *@c: int to be pronted
 *Return: 0 Always
 */
int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || ( c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
