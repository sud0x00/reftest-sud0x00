#include<stdio.h>
void main()
{
  float base , height , Area;
  printf("Enter length of base and height");
  scanf("%f%f",&base,&height);
  Area = 0.5*base*height;
  printf("Area of the given triangle is %.5f",Area);
}
