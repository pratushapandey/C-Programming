#include<stdio.h>
#define min_year 1990
#define max_year 9999

int main(){
	int d, m, y;
	printf("Enter the date : ");
	scanf("%d",&d);
	
	printf("Enter the month : ");
	scanf("%d",&m);
	
	printf("Enter the year : ");
	scanf("%d",&y);
	
	if(y >= min_year && y <= max_year){
		if(m >= 1 && m <= 12){
			if((d >= 1 && d <= 31) && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m==12)){
				printf("The date you entered is valid.");
			}
			else if ((d >= 1 && d <= 30) && (m == 4 || m == 6 || m == 9 || m == 11)){
				printf("The date you entered is valid.");
			}
			else if (((d >= 1 && d <= 28) || (d >= 1 && d <= 29)) && m == 2){
				printf("The date you entered is valid.");
			}
			else{
				printf("The date you entered is invalid.");
			}
		}
	}
	
	return 0;
}
