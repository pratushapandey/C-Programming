#include<stdio.h>

int main(){
	char ch;
	printf("Enter the value you want to input : ");
	scanf("%c", &ch);
	
	if(ch >= 48 && ch <= 57){
		printf("The input is a digit.");
	}
	else if(ch >= 65 && ch <= 90){
		printf("The input is UpperCase.");
	}
	else if(ch >= 97 && ch <= 122){
		printf("The input is LowerCase.");
	}
	else{
		printf("The input is symbol.");
	}
	
	return 0;
}
