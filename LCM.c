// LCM of two numbers

#include<stdio.h>

int main()
{
	int num1 ,num2, flag=1, max_div;
	printf("Enter the two numbers to calculate the LCM : ");
	scanf("%d %d", &num1, &num2);
	
	if(num1>num2)
	max_div =  num1;
	
	else
	max_div =  num2;
	
	while(flag)
	{
		if (max_div % num1 == 0 && max_div % num2 == 0){
			printf("LCM of %d and %d is : %d",num1,num2,max_div);
			break;
		}
		else{
			max_div++;
		}
	}
	return 0;
}
