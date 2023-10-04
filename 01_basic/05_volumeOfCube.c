// find the volume of a cube
#include <stdio.h>
#include <math.h>

int main()
{
  float side;
  printf("enter side of cube: ");
  scanf("%f", &side);
  float volume = pow(side, 3);
  printf("volume of cude is : %.2f\n", volume);
  return 0;
}