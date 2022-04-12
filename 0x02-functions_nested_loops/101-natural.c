#include "main.h"
#include <stdio.h>
/**
 *main - Entry point
 *to print the sum of all the multiples of 3 or 5 below 1024
 *Return: 0 Always
 */
int main(void)
{
  int mt;
  int mf;
  sm = mf + mt;

  for (mt % 3 == 0; mt > 0; mt < 1024)
    {
      for (mf % 5 == 0; mf > 0; mf < 1024)
	{
	  printf("%d", sm);
	}
    }
  _putchar('\n')
    return (0);
}
