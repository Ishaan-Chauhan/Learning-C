/*



*/
#define Size 10
void main()
{
	int i , j , temp;
	int a[Size];
	clrscr();
	//scan the array
	printf("Enter the elements of array :\n");
	for(i=0 ; i<Size ; i++)
	{
		printf("\nEnter [%d] : ",i);
		scanf("%d",&a[i]);
	}// scan done

	//print unsortd array
	printf("The Unsorted array is :\n");
	for(i=0 ; i<Size ; i++)
	{
		textcolor(1+i);
		cprintf("%d ",a[i]);

	}//print unsorted done

	//sort array
	for(i=0 ; i<Size ; i++)
	{
		for(j=0 ; j<Size-1 ; j++)
		{
			temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;

		}


	}
	//print sorted array
	printf("\nThe Sorted Array is : \n");
	for(i=0 ; i<Size ; i++)
	{
		textcolor(3+i);
		cprintf("%d ",a[i]);

	}

	getch();
}//main