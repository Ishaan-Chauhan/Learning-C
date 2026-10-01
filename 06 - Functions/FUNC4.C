#define Size 5

void sort();
void scan();
void print();
int a[Size];

void main()
{
	int i;
	clrscr();

	scan();
	sort();
	print();
       getch();

} // main

void scan()
{        int i;
	for( i=0 ; i<Size ; i++)
	{
		 printf("Enter the value of a[%d] : ",i);
		 scanf("%d",&a[i]);
	}
}//scan

void print()
{       int i;
	printf("\n");
	for( i=0 ; i<Size ; i++)
	{
		printf("%d\t",a[i]);
	}
}// print

void sort()
{
	int exc = 1 , temp, i , j ;
	for( i=0 ; i<Size && exc == 1 ; i++)
	{
		 exc == 0;;
		 for( j=0 ; j<Size - 1 ; j++)
		 {
			 if(a[j] > a[j+1])
			 {
				exc = 1;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;

			 }

		 }
	}
}// sort