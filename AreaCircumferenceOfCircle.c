// Area and Circumference of a Circle.

#include<stdio.h>
#define PI 3.14

int main()
{
	float r;
	printf("Enter the radius of the circle : ");
	scanf("%f",&r);
	
	float Area = PI * r * r;
	printf("The area of the circle is :%.1f ",Area);
	
	float Circumference = 2 * PI * r;
	printf("\nThe circumference of the circle is :%.2f ",Circumference);
	
	return 0;
}
