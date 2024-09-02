#include<stdio.h>
#include<conio.h>
	//Q.3 Transpose of 2D Array
	//Develop a Program to find the transpose matrix of a given 2D array.
void main()
{
	int r,c,i,j;
	printf("Enter the number of  rows in the array :");
	scanf("%d",&r);
	printf("Enter the number of  columns in the array :");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter the value Of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Before\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("After\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}