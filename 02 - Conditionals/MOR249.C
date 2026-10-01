/*
				Author Ishaan Chauhan
		    Objective - Vertical & Horizontal Triangles
				DOC - 24 / 9 / 26
*/
void main()
{
	int i , j , tri , row , k ;
	clrscr();
	printf("Enter no. of triangles needed :");
	scanf("%d",&tri);
	printf("Enter the no. of rows needed :");
	scanf("%d",&row);
	printf("--------------------------------------------------\n");
	for(j=1 ; j<=tri ; j++)
	{
		for(k=1 ; k<=row ; k++);
		{
			for(i=1 ; i<=1 ; i++)
			{
				printf("*\t");

			}
			printf("\n");
		}
	}
	getch();
}