#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
	int i;
	clrscr();

       /*	for(i=1; i<=5 ; i++)
	{
		delay(500);//slows the process so that you can see it happen and is in dos.h header file
		printf("\nIshaan");

	}//for
	*/
	for(i=5; i>=1 ; i--)
	{
		delay(500);//slows the process so that you can see it happen
		printf("\nIshaan");

	}//for

	printf("\n--------------------------");

	for(i=1; i<=5 ; i++)
	{
		delay(500);//slows the process so that you can see it happen
		printf("\nn1 : %d",i);

	}//for
	printf("\n---------------------------");

	for(i=5; i>=1 ; i--)
	{
		delay(500);//slows the process so that you can see it happen
		printf("\nn1 : %d",i);

	}//for

	getch();
}//main