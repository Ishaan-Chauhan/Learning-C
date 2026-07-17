/*  				Author - Ishaan
				DOC- 17 july


*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\nEnterthe value of a and b");
	scanf("%d%d",&a,&b);

	if (a%2==0 && b%2==0)
	{
		printf("%d and %d is even",a,b);
	} else if(a%2!=0 && b%2!=0)
		{
			printf("%d and %d is odd",a,b);
		}
		 else if(a%2=0 && b%2!=0)
	       {
	       printf("%d is even and %d is odd",a,b);
	       } else
		{
		printf("%d is odd and %d is even",a,b);
		}
	    getch();
}