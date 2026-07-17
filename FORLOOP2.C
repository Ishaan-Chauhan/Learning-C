void main()
{
       /*	int no1,no2,i;
	clrscr();

	printf("\nEnter No1 :");
	scanf("%d",&no1);
	printf("\nEnter No2 :");
	scanf("%d",&no2);

	for(i = no1 ; i<= no2 ; i++)
	{
		if(i % 2==1)
		{
			printf("%d\t",i);
		}//if
	}//for
	getch();
	*/
	int i,no;
	clrscr();

	printf("\nEnter the No. :");
	scanf("%d",&no);

	for (i=1 ; i<=10 ; i++)
	{
		delay(200);
		printf("\n%d * %d = %d",no,i,(no*i));
	}

       getch();

}//main
