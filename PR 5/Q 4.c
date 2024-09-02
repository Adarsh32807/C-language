#include<stdio.h>
#include<conio.h>
	//Q.4 Sum of Elements in Row & Column of 2D Array
	//Develop a Program to print and find the sum of all elements of a given row & column from a 2D array.

void main()
{
	int r,c,i,j,x,y,sum_row,sum_col;
	printf("Enter the number of  rows in the array :");
	scanf("%d",&r);
	printf("Enter the number of  columns in the array :");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter the value Of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter row number :");
	scanf("%d",&x);
	
	printf("\nvalues of row number %d are ",x);
	for(i=0; i<r; i++)
	{
		printf("%d ",a[x][i]);
	}
		
	for(i=0; i<r; i++)
	{
		sum_row = sum_row + a[x][i];
	}
	
	printf("\nSum of values of row number %d Is %d ",x,sum_row);
	
	printf("\nEnter column number :");
	scanf("%d",&y);
	
	printf("\nvalues Of column number %d are ",y);
	for(j=0; j<c; j++)
	{
		printf("%d ",a[j][y]);
	}
		
	for(j=0; j<c; j++)
	{
		sum_col = sum_col + a[j][y];
	}
	
	printf("\nSum Of values of column number %d is %d ",y,sum_col);
}