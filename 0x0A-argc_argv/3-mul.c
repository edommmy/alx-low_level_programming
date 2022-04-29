#include "main.h"
int main(int argc, char **argv)
{
  int a;
  int b;
  int r;
  r = a * b;
  printf("%i\n", r);
  if (argc < 2)
    {
      char e = 'Error';
      printf("%s\n", e);
      return (1);
    }
  return (0);
}
