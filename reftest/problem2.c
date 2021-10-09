#include<stdio.h>
float base()
{
  float q;
  printf("\n Enter the size of the base");
  scanf("%f",&q);
  return q;
}
float height()
{
  float w;
  printf("\n Enter the size of the height");
  scanf("%f",&w);
  return w;
}
float area(float hx, float bx)
{
  float Area;
  Area = 0.5*hx*bx;
  return Area;
}
float print(float ar)
{
   printf("\n Area of triangle is = %.5f",ar);
  return 0;
}
float main()
{
  float h1 = height();
  float b1 = base();
  float a = area(h1,b1);
  print(a);
  return 0;
}

