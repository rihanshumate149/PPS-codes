#include<stdio.h>
int main()
{
	float length,width,area,perimeter;
	printf("Enter length\t");
	scanf("%f",&length);
	
	printf("Enter width\t");
	scanf("%f",&width);
	area=length*width;
	perimeter=2*(length+width);
	printf("area of rectangle=%f\n",area);
	printf("perimeter of rectangle=%f\n",perimeter);
	return 0;
}

