// Factorial Of a given Number

#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number to calculate factorial : ");
	scanf("%d",&n);
	
	int fact = 1;
	for(i = n; i>=1; i--){
		fact = fact * i;
	}
	printf("The factorial of the number is : %d",fact);
	return 0;
}

