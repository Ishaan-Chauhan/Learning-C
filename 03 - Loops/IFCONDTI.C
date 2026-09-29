/*
				Author - Ishaan Chauhan
				Objective - Sum between a range

*/
void main()
{
	int i ;
	int start , stop ;
	int sumO = 0 , sumE=0 , choice ;
	clrscr();
	printf("Enter the starting no.\n");
	scanf("%d",&start);
	printf("Enter the ending no.\n");
	scanf("%d",&stop);
	printf("--------------------------------------------------\n");
	printf("1 --> For loop\n2 --> While loop\n3 --> Do while loop\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:	for(i=start ; i<=stop ; i++)
			{
				if(i%2==0)
				{
					sumE = sumE + i;
				}else{
					sumO = sumO + i;
				}
			}
			break;
		case 2: i=start;
			while(i<=stop)
			{
				if(i%2==0)
				{
					sumE = sumE + i;
				}else{
					sumO = sumO + i;
				}
				i++;

			}
			break;
		case 3: i = start;
			do
			{
				if(i%2==0)
				{
					sumE = sumE + i;
				}else{
					sumO = sumO + i;
				}
				i++;
			}
			while(i<=stop);
			break;
	}//switch
	printf("The sum of even no. is %d\n",sumE);
	printf("The sum of odd no is %d",sumO);
	sumO = 0;
	sumE = 0;

	getch();

}