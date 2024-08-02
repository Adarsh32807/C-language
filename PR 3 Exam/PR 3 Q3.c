#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n,ld;
	printf("enter your number =");
	scanf("%d",&n);
	ld = n%10;
	
	while(n>9)
	{
		n=n/10;
	}
	printf("first digit =%d \n\n",n);
	printf("last digit = %d\n",ld);
	printf("sum of first and last digit is = %d",n+ld);
}