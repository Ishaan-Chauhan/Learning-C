void main()
{
	int i,amount;
	clrscr();
	i=1;
	do
	{
		printf("\ni : %d ",i);
		i++;
	}while(i<=10);
	printf("\n");
	i=10;
	do
	{
		printf("\ni : %d ",i);
		i--;
	}while(i>=1);
	printf("\n");
	do
	{
		printf("\nEnter Amount (>=1000): ");
		scanf("%d",&amount);

	}while(amount<1000);
	printf("\nThe Amount is %d",amount);
	getch();
}
