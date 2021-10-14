#include<stdio.h>
struct triangle
{
	float height, base, area;
}t[100];
int num()
{
	int n;
	printf("Enter number of triangles : ");
	scanf("%d",&n);
	
	return n;
}
float h(int n)
{
	float height;
	printf("Enter the height of %d triangle: ", n);
	scanf("%f",&height);
	printf("\n");
	return height;

}
float b(int n)
{
    float base;
	printf("Enter the base of %d triangle: ", n);
	scanf("%f",&base);
	printf("\n");
	return base;
}
float area(float height, float base)
{
	float area;
	area = 0.5*height*base;
	return area;
}
int main()
{
	struct triangle t[100];
	int n;
	n = num();
	
	for(int i=0;i<n;i++)
	{
		t[i].height = h(i+1);
		t[i].base = b(i+1);
		printf("\n");
	}
	for( int i=0;i<n;i++)
	{
		t[i].area = area(t[i].height,t[i].base);
	}
	for(int i=0;i<n;i++)
	{
		printf("Area of %d triangle is %f " ,i+1 , t[i].area);
	}
	return 0;
}
