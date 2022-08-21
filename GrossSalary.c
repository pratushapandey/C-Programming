// Gross Salary of an Employee

#include<stdio.h>

int main()
{
	float BP, DA, HRA ;
	printf("Enter your Basic Pay amount(BP): ");
	scanf("%f",&BP);
	
	printf("\nEnter your Dearness Allowance(DA):");
	scanf("%f",&DA);
	
	printf("\nEnter your House Rent Allowance(HRA):");
	scanf("%f",&HRA);
	
	float Gross_Salary = BP * DA * HRA ;
	printf("The Gross Salary of the employee is :%f",Gross_Salary);
	
	return 0;
}
