/*			Author - Ishaan
			DOC - 19 July
			Objective - While loop
*/
void main()
{
	int no1,i;
	clrscr();
	printf("\nEnter no1 : ");
	scanf("%d",&no1);
	i=no1;
	while(i<=10)
	{
		if(i%2==1)
		{
		printf("\n I : %d",i);
		}
		i++;
	}

	getch();
}

