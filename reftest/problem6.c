#include<stdio.h>
int limit_func()
{
  int n;
  printf("Enter the value of n");
  scanf("%d",&n);
  return n;
}
int input_func(int y,int a[y])
{
  printf("Enter the elements");
  for(int i=0 ; i<y ; i++)
  {
    scanf("%d",&a[i]);  
  }
}
int sum_func(int z,int b[z])
{
  int sum = 0;
  for(int i=0 ; i<z ; i++)
  {
    if ( b[i] % 2 != 0) 
    {
       sum = sum + b[i];
    } 
  }
  return sum;
}
void op_func(int s)
{
  printf("\n Sum of odd numbers in the entered array is %d " , s);
}
int main()
{
  int x;
  x = limit_func();
  int arr[x];
  input_func(x,arr);
  int sum = sum_func(x,arr);
  op_func(sum);
  return 0;
}
