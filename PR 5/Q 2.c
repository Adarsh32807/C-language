#include<stdio.h>
#include<conio.h>
	//Q.2 Largest Element in 2D Array
	//Develop a Program to find the largest element from a given 2D array.
void main()
{
	int r,c,i,j,max;
	printf("Enter the number of  rows in the array :");
	scanf("%d",&r);
	printf("Enter the number of  columns in the array :");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	max = a[0][0];
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(max<a[i][j])
			{
				max = a[i][j];
			}
		}
	}	
	printf("Maximum value is %d ",max);	
}