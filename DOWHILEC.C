void main()

{
	int no1,count,sum,no2,fac,rev=0;
	double fac1=1;
	clrscr();
	printf("\nEnter the no. : ");
	scanf("%d",&no1);
	fac=no1;
	do
	{
	fac1 = fac1 * fac;
	fac--;

	}while(fac>0);
	printf("\nFactorial of no. is : %.2lf",fac1);
	count=0;
	sum=0;
	do
	{
	  count++;
	  no2=no1 % 10;
	  sum=sum + no2;
	  rev = (rev * 10)+no2;
	  no1 = no1 / 10;
	}while(no1>0);
	if(fac==no1){
	printf("\nThe no. is palindrome ");
	}else{
	printf("\nThe no. is not palindrome");
	}
	printf("\nTotal Digits : %d",count);
	printf("\nThe reversed digit is : %d",rev);
	printf("\nThe sum of digits is : %d",sum);
	getch();

}