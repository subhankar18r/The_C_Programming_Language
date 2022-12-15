#include<stdio.h>
int main(){
  float length, width;
  // taking the first input
  printf("enter length\n");
  scanf("%f",&length);
// taking the second input
  printf("enter width\n");
  scanf("%f",&width);

// output the perimeter
  printf("perimeter is %f\n", 2*(length +width));
  return 0;
}