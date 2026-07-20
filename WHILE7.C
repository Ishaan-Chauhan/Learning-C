void main()
{
	int no1,i;
	clrscr();
	printf("\nEnter no1 : ");
	scanf("%d",&no1);
	i=1;

	do
	{
		printf("\n %d * %d = %d",no1,i,no1*i);
		i++;
	}while(i<=10);
	getch();
}// main