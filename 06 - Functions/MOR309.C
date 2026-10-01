/*


*/
#include<stdio.h>
#include<conio.h>
#define Size 5
void main()
{
	int a[Size] , i=0 , choice;
	int b[Size];
	int c[Size],d[Size];
	clrscr();
	printf("Enter the elements of array 1\n");
		for(i=0 ; i<Size ; i++)
		{
			printf("Enter element of array 1 [%d]",i);
			scanf("%d",&a[i]);
		}
	printf("Enter the elements of array 2\n");
		for(i=0 ; i<Size ; i++)
		{
			printf("Enter element of array 2 [%d]",i);
			scanf("%d",&b[i]);

		}
	printf("Enter choice of array\n1 --> Add\n2 --> Subtraction\n3 --> Multiplication\n4 --> Division\n5 --> square of array\n6 --> Exit");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1: printf("-----------Add-----------\n");

			for(i=0 ; i<Size ; i++)
			{
				c[i] = a[i] + b[i];
				printf("%d + %d = %d\t",a[i] , b[i] , c[i]);
			}
			break;
		case 2: printf("-----------Subtraction-----------\n");

			for(i=0 ; i<Size ; i++)
			{
				c[i] = a[i] - b[i];
				printf("%d - %d = %d\t",a[i] , b[i] , c[i]);
			}
			break;
		case 3:printf("-----------Mutltiplication----------\n");

			for(i=0 ; i<Size ; i++)
			{
				c[i] = a[i] * b[i];
				printf("%d x %d = %d\t",a[i] , b[i] , c[i]);
			}
			break;
		case 4:printf("-----------Division-----------\n");

			for(i=0 ; i<Size ; i++)
			{
				c[i] = a[i] / b[i];
				printf("%d / %d = %d\t",a[i] , b[i] , c[i]);
			}
			break;
		case 5:printf("-----------Square-----------\n");

			for(i=0 ; i<Size ; i++)
			{
				c[i] = a[i] * a[i];
				printf("%d x %d = %d\t",a[i] , a[i] , c[i]);
				d[i] = b[i] * b[i];
				printf("%d x %d = %d\t",b[i] , b[i] , d[i]);

			}
			break;

		case 6: exit(0);

	}

	getch();

}