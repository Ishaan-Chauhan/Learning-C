#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(k=1;k<=3;k++)
	{
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("*");
			}
		   printf("\n");
		}
	   printf("\n");
	}//for
    getch();
}