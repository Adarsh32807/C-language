#include<stdio.h>
#include<conio.h>

void main()
{
	int BaseSalary,GrossSalary,hra,da,ta;
	hra=10;
	da=5;
	ta=8;
	printf("Enter Your Base Salary :");
	scanf("%d",&BaseSalary);

	GrossSalary=BaseSalary+(BaseSalary*hra)/100+(BaseSalary*da)/100+(BaseSalary*ta)/100;
	printf("Your Gross Salary : %d",GrossSalary);
}
