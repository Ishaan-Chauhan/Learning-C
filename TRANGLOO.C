/*
			Author - Ishaan
			DOC - 23 july
			objective - nested loop (for)

*/
void main()
{
	int i,j,n,t;
	char ch;
	clrscr();
	printf("\nEnter the no.of rows : ");
	scanf("%d",&n);
	for(t=1;t<=4;t++)
	{
		printf("\nEnter the Character : ");
		scanf(" %c",&ch);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
			printf("%c",ch);
			}
		printf("\n");
		}
	gotoxy(n+1,n+4);
	}
	getch();
}//main