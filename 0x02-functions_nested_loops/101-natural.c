#include "main.h"
#include <stdio.h>
/**
 *main - Entry point
 *to print the sum of all the multiples of 3 or 5 below 1024
 *Return: 0 Always
 */
int main(void)
{
int mtf, r;
for (mtf = 0; mtf < 1024; mtf++)
if(mtf % 3 == 0 || mtf % 5 == 0)
r += mtf;
printf("%d\n", r);
return (0);
}
