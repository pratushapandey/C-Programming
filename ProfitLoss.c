#include<stdio.h>

int main()
{
	int SP,CP,Profit,Loss;
	printf("Enter the Selling Price : ");
	scanf("%d",&SP);
	
	printf("Enter the Cost Price : ");
	scanf("%d",&CP);
	
	if(SP > CP){
		Profit  = SP - CP;
		printf("You made a profit of Rs %d",Profit);
	}
	else if(CP > SP){
		Loss = CP - SP;
		printf("You made a loss of Rs %d",Loss);
	}
	else
	printf("Enter correct input.");
	
	return 0;
}
