//Check whether the given year is LEAP or not. 
//leap year
#include<stdio.h>
int main()
{
	int yr;
	printf("Enter a year n");
	scanf("%d",&yr);
	
	if(yr%4==0){
		
		
		if(yr%100==0){
			if(yr%400==0)
			printf("n it is LEAP YEAR");
			else
				printf("n it is NOT LEAP YEAR");
			
		}
		else{
		  printf("n it is LEAP YEAR");
		}
	}
	else
		printf("n it is Not LEAP YEAR");
		return 0;
	
	
}
