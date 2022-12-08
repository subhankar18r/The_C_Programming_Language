#include <stdio.h>

void swap(int *a, int *b);

int main()
{
  int x = 5, y = 6;
  swap(&x, &y);
  printf("x = %d & y = %d\n", x, y);
  return 0;
}

// call by reference
void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}