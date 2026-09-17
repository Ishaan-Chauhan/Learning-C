/*
			Author - Ishaan Chauhan
			Objectie - linear search of a array
*/
void main()
{
	int i, found = 0;
	int a[10] , fon;
	clrscr();

	for(i=0 ; i<10 ; i++)
	{
		printf("Enter the Array\n");
		scanf("%d",&a[i]);

	}//for

	printf("Enter the no. to be found");
	scanf("%d", &fon);
	for(i=0 ; i<10 ; i++)
	{
		if(fon == a[i])
		{
			found = 1;
			break;

		}//if

	}//for

	if(found == 1)
	{
		printf("The %d is in a[%d]",fon,i);

	}else
	    {
		printf("The %d is not in Array",fon);

	    }
	getch();
}//main