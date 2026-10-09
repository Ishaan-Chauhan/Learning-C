/*



*/
#define Size 10

void main()
{
	int a[Size] , temp , count = 0 , exc = 1;   //misc
	int i , j ; // loop
	clrscr();
	for(i=0 ; i<Size ; i++)
	{
		printf("Enter the values of array [%d]\n",i);
		scanf("%d",&a[i]);

	}// for scaning

	printf("\nThe unsrted Array is ::  \n");
	for(i=0 ; i<Size ; i++)
	{
		printf("%d \t",a[i]);

	}//for printing unsorted

	for(i=0 ; i<Size && exc == 1 ; i++)
	{
		exc = 0;
		for(j=0 ; j<Size-1-i ; j++)
		{
			count++;
			if(a[j] > a[j+1])
			{
				exc = 1;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;


			} // if



		}// j





	} //i

	printf("\nSorted array is :: \n");
	for(i=0 ; i<Size ; i++)
	{
	printf("%d \t",a[i]);


	}
	printf("\n iterations == %d",count);
	getch();


}//main