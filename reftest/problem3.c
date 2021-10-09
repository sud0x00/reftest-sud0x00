#include<stdio.h>
struct aot
{
  float h,b,a;
};
struct aot x;
float height()
{
  printf("Length of height");
  scanf("%f",&x.h);
  
}
float base()
{
  printf("Length of base");
  scanf("%f", &x.b);
  
}
float area()
{
  x.a= 0.5*x.h*x.b;
  
}
void op()
{
    printf("\n Area of triangle  = %.5f",x.a);
}

int main()
{
  height();
  base();
  area();
  op();
  return 0;
}




