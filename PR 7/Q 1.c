#include<stdio.h>
#include<conio.h>


	//Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
	//using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
	//is pressed.

int sum(int x,int y)
{
	return x+y;
}

int sub(int x,int y)
{
	return x-y;	
}

int product(int x,int y)
{
	return x*y;	
}

int divide(int x,int y)
{
	return x/y;	
}

int mode(int x,int y)
{
	return x%y;	
}
void main()
{
	
	int choice,num1,num2;
	
	restart:
	
	printf("\nPress 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %%\n");
	printf("Press 0 for exit\n");
	
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	
	if(choice==0)
	{
		goto end;
	}
	
	printf("\nEnter first number : ");
	scanf("%d",&num1);
	
	printf("\nEnter second number : ");
	scanf("%d",&num2);	
	
	switch(choice)
	{
		case 1 : printf("\nSum of %d and %d is %d.\n",num1,num2,sum(num1,num2));
		break;
		
		case 2 : printf("\nSubstraction of %d and %d is %d.\n",num1,num2,sub(num1,num2));
		break;
		
		case 3 : printf("\nMultiplication of %d and %d is %d.\n",num1,num2,product(num1,num2));
		break;
		
		case 4 : printf("\nDivision of %d and %d is %d\n",num1,num2,divide(num1,num2));
		break;
		
		case 5 : printf("\nModule of %d and %d is %d.\n",num1,num2,mode(num1,num2));
		break;
		
		
		default : printf("\nEnter valid choice!!");
	}
	
	goto restart;
	
	end:
	printf("\nThe program has been ended");
}