void main()
{
	int no1,no2,i;
	clrscr();
	printf("\nEnter no1 : ");
	scanf("%d",&no1);
	printf("\nEnter no2 : ");
	scanf("%d",&no2);
	i=no1;
	while(i<=no2)
	{
		if(i%2==0)
		{
			printf("\nI : %d",i);
		}
		i++;
	}
	getch();
}