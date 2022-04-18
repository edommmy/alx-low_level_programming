#include "main.h"
/**
 *print_array - prints n elements of an array
 *@a: pointed to an int to be changed
 *@n: return value
 *Return: 0 Always
 */
void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < n - 1);
{
printf(", ");
}
i++;
}
printf("\n");
}
