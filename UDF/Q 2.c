#include<stdio.h>
#include<conio.h>

//Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.

void div(int n)
{
	if(n%3==0 && n%5==0)
	{
		printf("Number is divisible by both 3 and 5");
	}
	else if(n%3==0)
	{
		printf("Number is divisible by only 3");
	}
	else if(n%5==0)
	{
		printf("Number is divisible by only 5");
	}
	else
	{
		printf("Number is not divisible  by both 3 and 5");
	}
}
int main()
{
	int n;
	printf("Enter Any Number : ");
	scanf("%d",&n);
	div(n);

	return 0;
}