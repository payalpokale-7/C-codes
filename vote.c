//WAP to check whether a person is eligible for voting or not
#include<stdio.h>
void main()
{
	int i;
	printf("check whether a person is eligible for voting or not ");
	scanf("%d",&i);
	if(i<=18)
	{
		printf("A person is not eligible for voting");
		
	}
	else
	{
		printf("A person is eligible for voting");
	}
}
