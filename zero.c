//WAP to check whether Number is positive or negative or ZERO
#include<stdio.h>
void main()
{
	int x;
	printf("check whether Number is positive or negative or ZERO");
	scanf("%d",&x);
	if(x>0)
	{
		printf("Number is positive");
	}
	else if(x<0)
	{
		printf("Number is Negative");
	}
	else
	{
		printf("Number is zero");
	}
}
