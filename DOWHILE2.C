void main()
{
	int choice,no1,no2;
	clrscr();
	do
	{
		printf("\n Press 1 to ADD : ");
		printf("\n Press 2 to SUB : ");
		printf("\n Press 3 to Exit : ");
		printf("\nEnter Choice : ");
		scanf("%d",&choice);

			if(choice==1)
			{
			 printf("\nEnter no1 : ");
			 scanf("%d",no1);
			 printf("\nEnter no2 : ");
			 scanf("%d",no2);
			 printf("\nADD is : %d",no1+no2);
			}else if(choice==2)
			      {
				printf("\nEnter no1 : ");
				scanf("%d",&no1);
				printf("\nEnter no2 : ");
				scanf("%d",&no2);
				printf("\nSUB is : %d",no1-no2);
			      }else{
				   printf("\n Invalide Entery");
				   break;
				   }
	}while(choice<3);
	getch();
}//main