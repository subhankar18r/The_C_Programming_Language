// find the area of circle
#include <stdio.h>
#define PI 3.14
int main()
{
  float radius;
  printf("enter radius: ");
  scanf("%f", &radius);
  float area = PI * radius * radius;
  printf("area is %f\n", area);
  return 0;
}