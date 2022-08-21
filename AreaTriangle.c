// Area Of a Triangle

#include<stdio.h>

int main()
{
	float b,h;
	printf("Enter the breadth of the triangle : ");
	scanf("%f",&b);
	
	printf("Enter the height of the triangle : ");
	scanf("%f",&h);
	
	float Area = (b*h)/2;
	printf("The area of the triangle is : %.2f",Area);
	
	return 0;
}
