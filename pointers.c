#include <stdio.h>

void mult2nums(int a, int b)
{
  a = a * b;

  printf("%d\n", a);
}

int main(void)
{
  int x = 10, y =20;

  mult2nums(x, y);

  printf("%d\n", x);

  return 0;
}