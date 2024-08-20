#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,num=11;
	
	num=41;
	
	for(i=1;i<=5;i++)
	{
	 num=41;
	 
	 for(j=1;j<=i;j++)
	 {
	 	printf("%d ",num);
	 	num++;
	 }
	 	printf("\n");
	}
}