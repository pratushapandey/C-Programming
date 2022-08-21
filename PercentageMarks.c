// Percentage Of 5 Subjects

#include<stdio.h>

int main()
{
	int num1,num2,num3,num4,num5;
	printf("Enter the marks of first subject : ");
	scanf("%d",&num1);
	printf("Enter the marks of second subject : ");
	scanf("%d",&num2);
	printf("Enter the marks of third subject : ");
	scanf("%d",&num3);
	printf("Enter the marks of fourth subject : ");
	scanf("%d",&num4);
	printf("Enter the marks of fifth subject : ");
	scanf("%d",&num5);
	
	int Sum = num1 + num2 + num3 + num4 + num5;
	printf("\nThe Sum total of the marks you got is : %d",Sum);
	
	int Percentage = Sum/ 5;
	printf("\nThe Percentage of marks obtained is : %d %",Percentage);
	
	return 0;
}
