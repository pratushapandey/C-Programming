// Read integer and print first 3 powers(1,2,3).

#include<stdio.h>
#include<math.h>

int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	int Power1 = pow(num,1);
	printf("Power of 1 is : %d",Power1);
	
	int Power2 = pow(num,2);
	printf("\nPower of 2 is : %d",Power2);
	
	int Power3 = pow(num,3);
	printf("\nPower of 3 is : %d",Power3);
	
	return 0;
}
