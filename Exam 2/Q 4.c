#include<stdio.h>
#include<conio.h>

// WAP to a create simple calculator using switch case.

void main()
{
	int a,b;
	int choice;

	start:

	printf("Press 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %\n");
	printf("Press 0 to end\n");
	
	printf("Enter your choice :");
	scanf("%d",&choice);

	if (choice==0)
	{
		goto end;
	}

	printf("Enter your first number :");
	scanf("%d",&a);

	printf("Enter your second number :");
	scanf("%d",&b);

	switch(choice)
	{
		case 1: printf("sum of %d and %d is %d.\n",a,b,a+b);
		break;

		case 2: printf("subtraction of %d and %d is %d.\n",a,b,a-b);
		break;

		case 3: printf ("multiply of %d and %d is %d.\n",a,b,a*b);
		break;

		case 4: printf("division of %d and %d is %d.\n",a,b,a/b);
		break;

		case 5: printf("percentage of %d and %d is %d.\n",a,b,a%b);
		break;
		
		default: printf("Enter valid input");
	}

	goto start;
	end:
	printf("Program has been end");

}