#include "main.h"
#include <stdio.h>
/**
 * main - prints 1 to 100 and words based on multiplicity
 * 
 * Return: 0 Always
 */
 /* prints from 1 to 100 + a new line*/
 /* multiples of 3 = Fizz */
 /* multiples of 5 = Buzz */
 /* multiples of 3 and 5 = FizzBuzz */
 /* everything should be separated by space */
int main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if (i % 3 == 0)
{
printf("%s ", "Fizz");
}
else if (i % 5 == 0)
{
printf("%s ", "Buzz");
}
else if (i % 5 == 0 && i % 3 == 0)
{
printf("%s ", "FizzBuzz");
}
else
{
printf("%d ", i);
}
if (i != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
