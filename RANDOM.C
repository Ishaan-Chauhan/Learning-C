/*                     	Author - Ishaan Chauhan
			DOC - 16 July 2026
			Objective - idk
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	   double no1,no2,ans;
	   clrscr();

	   printf("\nEnter the first no. :");
	   scanf("%lf",&no1);
	   printf("\nEnter the second no. :");
	   scanf("%lf",&no2);

	   printf("\nno1=%.4lf",no1);
	   printf("\nno2=%.4lf\n",no2);

	   ans = no1 + no2;
	   printf("\n%.2lf = %.2lf + %.2lf ",ans,no1,no2);
	   printf("\nAbove operation is ans = no1 + no2\n");

	   ans = no1 - no2;
	   printf("\n%.3lf = %.3lf + %.3lf",ans,no1,no2);
	   printf("\nAbove operation is ans = no1 - no2\n");

	   ans = no1 * no2;
	   printf("\n%.4lf = %.4lf + %.4lf ",ans,no1,no2);
	   printf("\nAbove operation is ans = no1 * no2\n");

	   ans = no1 / no2;
	   printf("\n%lf = %lf + %lf ",ans,no1,no2);
	   printf("\nAbove operation is ans = no1 / no2\n");


	   getch();

}// main
