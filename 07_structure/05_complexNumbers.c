#include <stdio.h>

typedef struct complex
{
  int real;
  int img;
} complex;

int main()
{
  complex n1 = {5, 8};
  complex *ptr = &n1;

  printf("real part : %d\n", ptr->real);
  printf("imaginary part : %d\n", ptr->img);
  return 0;
}