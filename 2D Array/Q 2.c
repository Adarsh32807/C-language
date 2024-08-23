#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c,i,j;
	printf("enter the value of rows  :");
	scanf("%d",&r);
	printf("enter the value of columns :");
	scanf("%d",&c);
	
	int a[r][c];
	printf("enter the value of array :\n");
	
	for(i=0; i<r; i++) 
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0; i<r; i++) 
	{ 
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		printf("\n");	
	printf("The Length Of Array is %d ",r*c);
}