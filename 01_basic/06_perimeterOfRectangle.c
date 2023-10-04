// find the perimeter of a rectangle
#include <stdio.h>
int main()
{
  float length, width;
  printf("enter length: ");
  scanf("%f", &length);
  printf("enter width: ");
  scanf("%f", &width);
  float perimeter = 2 * (length + width);
  printf("perimeter is %f\n", perimeter);
  return 0;
}