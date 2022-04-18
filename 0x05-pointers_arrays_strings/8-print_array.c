#include "main.h"
/**
 *print_array - prints n elements of an array
 *@a: pointed to an int to be changed
 *@n: return value
 *Return: 0 Always
 */
void print_array(int *a, int n)
{
  short c = 0;
  while (n-- > 0)
    {
      printf("%d", a[c++]);
      if (n != 0)
	{
	  printf(", ");
	}
      printf("\n");
    }
}
