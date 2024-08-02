#include<stdio.h>
#include<conio.h>

void main()
{
	char ch='a';
	
	do
	{
		if(ch=='a'||ch=='e'||ch=='i'||ch=='m'||ch=='q'||ch=='u'||ch=='y')
		{
			printf("%c ",ch);
		}
		ch++;	
	}while (ch<='z');
	
}