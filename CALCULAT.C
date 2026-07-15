/*                       Author -Ishaan Chauhan
			 DOC - 13 July
			 Objective - Calculator


*/
#include<stdio.h>
#include<conio.h>
void main(){
	   int a,b,c,choice;
	   start:
	   clrscr();
	   printf("\n====================");
	   printf("\n|    Calculator    |");
	   printf("\n====================");
	   printf("\n[1]-----Add" );
	   printf("\n[2]-----Subtract");
	   printf("\n[3]-----Multiply");
	   printf("\n[4]-----Divide");
	   printf("\n[5]-----exit");
	   printf("\nEnter Choice");
	   scanf("%d",&choice);
		switch(choice){
			 case 1:printf("\nEnter the value of a & b");
				scanf("%d%d",&a,&b);
				c=a+b;
				printf("\nThe Addition of %d and %d is %d ",a,b,c);
				break;
			case 2:printf("\nEnter the value of a & b");
				scanf("%d%d",&a,&b);
				c=a-b;
				printf("\nThe Subtraction of %d and %d is %d ",a,b,c);
				break;
			case 3:printf("\nEnter the value of a & b");
				scanf("%d%d",&a,&b);
				c=a*b;
				printf("\nThe Multiplication of %d and %d is %d ",a,b,c);
				break;
			case 4:printf("\nEnter the value of a & b");
				scanf("%d%d",&a,&b);
				c=a/b;
				printf("\nThe Divison of %d and %d is %d ",a,b,c);
				break;
			case 5:exit(0);
			break;



		}//Switch
	   getch();
	   goto start;

}//MAIN