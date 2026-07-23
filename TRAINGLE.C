void main()
{
	int i,r,t,k,choice,c;
	clrscr();
	printf("WHich type of traingle");
	printf("\nPress 1 for reverse");
	printf("\nPress 2 for normal");
	printf("\nEnter choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
	    case 1:	printf("Enter the no of rows : ");
			scanf("%d",&r);
			printf("\nChoose Color :");
			printf("Blue : 1");
			printf("\nGreen : 2");
			printf("\nWhich Color :");
			scanf("%d",&c);
			for(k=4;k>=1;k--)
			{
				for(t=1;t<=r;t++)
				{
					for(i=0;i<k;i++)
					{       textcolor(c);
						cprintf("*");
					}//ch print
					printf("\t");
				}//triangle print
			printf("\n");
			}//repeat triangle
			break;

	    case 2:	printf("Enter the no of rows : ");
			scanf("%d",&r);
			printf("\nChoose Color :");
			printf("Blue : 1");
			printf("\nGreen : 2");
			printf("\nWhich Color :");
			scanf("%d",&c);
			for(k=1;k<=4;k++)
			{
				for(t=1;t<=r;t++)
				{
					for(i=0;i<k;i++)
					{       textcolor(c);
						cprintf("*");
					}//ch print
					printf("\t");
				}//triangle print
			printf("\n");
			}
			break;
	}
	getch();

}//main