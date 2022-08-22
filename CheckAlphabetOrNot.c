#include<stdio.h>

int main(){
	int ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	
	if(ch >='a'&& ch <='z' || ch>= 'A' && ch<='Z')
	printf("The character %c is an alphabet.",ch);
	
	else
	printf("The character %c is not an alphabet.",ch);
	
	return 0;
}
