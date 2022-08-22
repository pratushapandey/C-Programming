#include<stdio.h>

int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	if(num >= 0){
		printf("The number %d is a positive number.",num);
	}
	else if(num == 0){
		printf("The number %d is zero.",num);
	}
	
	else{
		printf("The number %d is a negitive number.",num);
	}
}
