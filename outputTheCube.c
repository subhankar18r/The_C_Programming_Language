#include <stdio.h>

int main()
{
  float side;
  //   take input from cube's one side
  printf("enter side\n");
  scanf("%f", &side);

  // output the cude
  printf("cude is : %.2f\n", side * side * side);
  return 0;
}