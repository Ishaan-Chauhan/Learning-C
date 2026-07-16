/*             Author - Ishaan


*/
#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c,d,e;
	clrscr();
	a=2 , b=5 ,c=7;
	d=++a + ++a + ++a + a++ + a++ + ++b + ++b + b++ + ++c + c++ + a+b+c;
	printf("\nd is %d",d);
	e=++a + ++a + a++ + ++b + ++b + ++c + ++d;
	printf("\ne is %d",e);
	printf("\n%d\n%d\n%d\n%d\n%d\n",++a,++b,++c,++d,++a);
	getch();

}//main