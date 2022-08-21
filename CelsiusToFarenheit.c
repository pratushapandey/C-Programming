// Celsius To Farenheit Conversion

#include<stdio.h>

int main()
{
	float C;
	printf("Enter the temperature in Celsius : ");
	scanf("%f",&C);
	
	float F = C * 1.8 + 32;
	printf("The temperature in Farenheit is : %.2f",F);
	
	return 0;
}
