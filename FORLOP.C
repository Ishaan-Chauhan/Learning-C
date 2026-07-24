/*
				Author - Ishaan
				DOC - 21 July 26
				Objective - For loop

				Aa1
				Bb2
				Cc3


*/
void main()
{
	char ch='a',ch1='A';
	int i,j,k;
	clrscr();
	k=1;
	for(j=0;j<=80;j++)
	{
		for(i=0;i<=25;i++)
		{
			delay(2);
			if(j%2==0)
			{
				gotoxy(j+1,i+1);
				textcolor(i+j);
				cprintf("%c",ch+i);

			 } else if(j%3==0)
				{
				gotoxy(j+1,i+1);
				cprintf("%d",k+i);

				}else{
				gotoxy(j+1,i+1);
				cprintf("%c",ch1+i);
				}
		}// in for1
	 }// out for1

	getch();
}// main