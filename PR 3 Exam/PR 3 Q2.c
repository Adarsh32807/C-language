#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n;
	printf("enter your number =");
	scanf("%d",&n);
	
	while(n>9)
	{
		n=n/10;
		i++;
	}
	printf("enter your number %d digit number",i);
}