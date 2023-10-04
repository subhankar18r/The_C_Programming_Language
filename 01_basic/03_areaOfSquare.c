// find the area of square
#include <stdio.h>
int main()
{
  float side;
  printf("enter the side of the square \n");
  scanf("%f", &side);
  float area = side * side;
  printf("the area of the square is %f\n", area);
  return 0;
}