// Simple Interest 

#include<stdio.h>

int main()
{
	float Principle, Rate, Time;
	printf("Enter your Principle Amount : ");
	scanf("%f",&Principle);
	
	printf("\nEnter your Rate of Interest : ");
	scanf("%f",&Rate);
	
	printf("\nEnter your Time Limit : ");
	scanf("%f",&Time);
	
	float SimpleInterest = Principle*Rate*Time/(100*12);
	printf("\nSimple Interest Calculated is : %f",SimpleInterest);
	
	return 0;
}
