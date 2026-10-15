/*
			Author - Ishaan Chauhan
			DOC - 12 / 10 / 26
			Objective - Searching
*/
#define Size 10
void main()
{
	int a[Size] , i , key , success = -1 ;
	clrscr();
	for (i=0 ; i<Size ; i++)
	{
		printf("\Enter the vluse of a[%d] ",i);
		scanf("%d",&a[i]);

	}
	printf("\nEnter the key = ");
	scanf("%d",&key);
	for(i=0 ; i<Size ;i++)
	{
		if(key == a[i])
		{
			success = i;
			break;

		}
	}
	if(success >= 0)
	{
		printf("\nKey found at index %d\n",i);


	}else
	{
		printf("\nKey not in array\n");

	}
	getch();
}