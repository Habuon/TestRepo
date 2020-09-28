#include <stdio.h>

void hanoi(int n, int a, int b)
{
  if (n == 1){
    printf("presunul som kamen 1 z %d na %d\n", a, b);
    return;
  }
  else
  {
    hanoi(n - 1, a, 6 - a);
    printf("presunul som kamen %d z %d na %d\n", n, a, b);
    hanoi(n - 1, 6 - a - b, b);
  }
}

int main()
{
  int n = 4;

  hanoi(n, 1, 2);
  return 0;
}
