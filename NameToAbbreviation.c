// Convert a Persons Name To Abbreviated.

#include<stdio.h>

int main()
{
	char fname[50], mname[50], lname[50];
	printf("Enter the name of the person(First Middle Last) : ");
	scanf("%s%s%s",fname,mname,lname);
	
	printf("Abbreviated name : %c.%c %s",fname[0],mname[0],lname);
	return 0;
}
