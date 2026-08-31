void main()
{
	int no1,no2,i,sum=0;
	clrscr();
	printf("\nEnter No1 : ");
	scanf("%d",&no1);
	printf("\nEnter No2 : ");
	scanf("%d",&no2);
	i=no1;
	while(i<=no2)
	{
		printf("\n I  :  %d",i);
		sum=sum+i;
		i++;

	}
	printf("\nSum : %d",sum);
	getch();
}
