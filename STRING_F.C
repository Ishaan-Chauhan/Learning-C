/*        Author-Ishaan Chauhan
	  DOC-14 july 2026
	  Objective- incriment and decriment  with string

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	   int a,b,c,d,e;
	   clrscr();
	   a=2 ,b=3 ,c=4;
	   d=++a + ++a + ++a + ++a + a++ + a++ + ++b + b++ + a+b+c + c++ + ++c + ++c;
	   printf("\nThe value of c is %d",d);
	   e=a++ + ++b + ++c + ++d + ++a;
	   printf("\nThe vaulue of d is %d",e);
	   getch();


}//Main