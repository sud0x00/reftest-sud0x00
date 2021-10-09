#include<stdio.h>
#include<math.h>
float i_p()
{
    float x;
    printf("Enter the value of X");
    scanf("%f",&x);
    return x;
}
float calc(float a)
{
    float res = exp(a);
    return res;
}
void o_p(float r , float x)
{
    printf("Exponential value of %f is %.3f",x,r);
}
int main()
{
    float x_value,result;
    x_value = i_p();
    result = calc(x_value);
    o_p(result , x_value);
}
