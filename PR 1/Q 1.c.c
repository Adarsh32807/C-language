#include<stdio.h>
#include<conio.h>
 
void main()
{
	float fahrenheit,celsius;
	printf("Enter The Temperature =");
	scanf("%f",&celsius);
	
	fahrenheit=(celsius*9)/5+32;
	printf ("fahrenheit= %.3f",fahrenheit);
}
