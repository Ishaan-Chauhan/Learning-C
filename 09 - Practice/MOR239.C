/*				Author - ishaaan
				DOC - 23 / 09 / 2026
			  Objective - Traingle by user input
*/
void main()
{
	int i, j , nom , choice ;
	char ch ;
	clrscr();
	printf("Enter the no of colums in triangle\n");
	scanf("%d",&nom);
	printf("Enter the element for traingle to be made from\n");
	scanf(" %c",&ch);

	printf("Enter the style of triangle\n1--> Normal \n2--> Reversed");
	scanf("%d",&choice);

		printf("\n");
	printf("-----------------------------------------------------\n");
	switch (choice)
       {

	case 1:    //normal
		for(i=1 ; i<=nom ; i++)
		{
			textcolor(i+1);
			for(j=1 ; j<=i ; j++)
			{
			       cprintf("%c ",ch);

			}
			printf("\n");
		}
		break;

	case 2:    // reversd
		for(i=nom ; i>=1 ; i--)
		{
			textcolor(i+1);
			for(j=i ; j>=1 ; j--)
			{
			       cprintf("%c ",ch);

			}
			printf("\n");
		}
		break;
       }
	getch();

}