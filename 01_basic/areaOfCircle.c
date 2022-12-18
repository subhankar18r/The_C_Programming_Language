#include<stdio.h>
#define PI 3.14
int main(){
  float radius;
  printf("enter radius \n");
  scanf("%f",&radius);

  printf("area is %f\n",PI * radius*radius);
  return 0;
}