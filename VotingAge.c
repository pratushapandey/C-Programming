#include<stdio.h>

int main(){
	int age;
	printf("Enter your age : ");
	scanf("%d",&age);
	
	if(age >= 18)
	printf("Your age is %d.\nYou are eligible to vote.",age);
	
	else
	printf("Your age is %d.\nYou are not eligible to vote.",age);
	
	return 0;
}
