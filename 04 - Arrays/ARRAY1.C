/*
				Author - Ishaan
				DOC - 6 Aug 2026
				Objective - Array
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],i,c[10];

	clrscr();
	for(i=0 ; i<10 ; i++)
	{
		printf("\nEnter the element of a(%d) :\t ",i);
		scanf("%d",&a[i]);
	}
	for(i=0 ; i<10 ; i++)
	{
		printf("Elements of a : %d\t",a[i]);
	}
	for(i=0 ; i<10 ; i++)
	{
		printf("\nEnter the element of b(%d) :\t ",i);
		scanf("%d",&b[i]);

	}
	for(i=0 ; i<10 ; i++)
	{
		printf("Elements of b : %d\t",b[i]);
	}

	for(i=0 ; i<10 ; i++)
	{
		c[i] = a[i] + b[i];
		printf("\nAddition is : %d",c[i]);

	}

	getch();
}//main