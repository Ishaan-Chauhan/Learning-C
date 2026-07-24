/*				Author - Ishaan
				DOC - 18 july 26
				objective - ecit orinted loop
*/
void main()
{
	char ch='a';
	int i,j;
	clrscr();
	for(j=0;j<80;j++)
	{
		for(i=0;i<26;i++)
		{
			sound(200);
			delay(55);
			nosound();
			gotoxy(j,i+1);
			textcolor(i+j);
			cprintf("%c",ch+i);
		}//for
	}//for
       getch();
}