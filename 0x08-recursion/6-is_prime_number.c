#include "main.h"
/**
 *_prime_number - returns 1 if the input integer is a prime number
 *@n - tested int
 *Return: 1 On succes and 0 if not prime
 */
int is_prime_number(int n)
{
  if (n <= 1)
    return (0);
  else
    return (pmnum(n, 2);
}
      /**
       *pmnum - makes possible to evaluate from 1 to n
       *@a: input int
       *@b: counting var
       *Return: 1 On success
    */
int pmnum(int a, int b)
{
if (a == b)
return (1);
if (a % b == 0)
return (0);
else
return (pmnum(a, b + 1));
}
