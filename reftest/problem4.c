   
#include<stdio.h>

struct triangle
{
  float height,base,area;
}t[3];
float findarea(float height, float base)
{
  float a = 0.5 * height * base;
  return a;
}
float inp()
{
    for(int i=0;i<3;i++)
    {
      printf("\n Enter the height of %d triangle: ", i+1);
      scanf("%f",&t[i].height);
      printf("\n Enter the base of %d triangle: ", i+1);
      scanf("%f",&t[i].base);
      printf("\n");
    }
}
float op1(float b[])
{
    for(int i=0; i<3; i++)
     {
       printf("area of triangle %d = %f \n", i+1,b[i]);
     }
}
float op2(float c[])
{
    float largest;
    largest = ( (c[0]>c[1]&&c[0]>c[2]) ? c[0] : c[1]>c[2]?c[1]:c[2] );
    printf("The largest area of triangle is : %.2f ",largest);
}
int main()
{
    int i;
    inp();
    float a[3];
    for(int i=0;i<3;i++)
    {
      a[i] = findarea(t[i].height , t[i].base);
    }
    op1(a);
    op2(a);
    return 0;
}  
