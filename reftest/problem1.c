#include<stdio.h>
int main()
{
  float base , height , area;
  printf("Enter length of base and height");
  scanf("%f%f",&base,&height);
  area = 0.5*base*height;
  printf("Area of the given triangle is %.5f",area);
  return 0;
}
