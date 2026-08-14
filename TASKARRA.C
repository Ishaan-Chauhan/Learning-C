/*
				Author - Ishaan Chauhan
				DOC - 13 Aug
				Objective - Task
*/
#include<stdio.h>
#include<conio.h>
#define Size 3    //constant
void main()
{
	int a[Size] , b[Size] , c[Size]; //single array
	int x[Size][Size] , y[Size][Size] , z[Size][Size]; //multii array
	int i , j , choice , choice1 , choice2 ; //extras
	clrscr();
	printf("Enter the values for Array :\n");
	Single:    //lable
		for(i=0 ; i<Size ; i++)
		{
			printf("a[%d] : ",i);
			scanf("%d",&a[i]);
		}
		for(i=0 ; i<Size ; i++)
		{
			printf("b[%d] : ",i);
			scanf("%d",&b[i]);
		}
		if(choice == 1 )
		{goto EndScan;}

	Multi: //lable
		for(i=0 ; i<Size ; i++)
		{
			for(j=0 ; j<Size ; j++)
			{
				printf("x[%d][%d] : ",i,j);
				scanf("%d",&x[i][j]);
			}//in for
		}//out for
		for(i=0 ; i<Size ; i++)
		{
			for(j=0 ; j<Size ; j++)
			{
				printf("y[%d][%d] : ",i,j);
				scanf("%d",&y[i][j]);
			}//in for
		}//out for
	EndScan:
	Operation:
		printf("\n1 ----- Rescan Single Dimensions");
		printf("\n2 ----- Rescan Multi Dimensions");
		printf("\n3 ----- Operations on Single Dimensions");
		printf("\n4 ----- Operations on Multi Dimensions");
		printf("\n5 ----- Exit\n");
		printf("Enter the choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: goto Single;
				break;

			case 2: goto Multi;
				break;

			case 3:printf("\n1 ----- Addition");
			       printf("\n2 ----- Subtraction");
			       printf("\n3 ----- Multiplication");
			       printf("\n4 ----- Devision");
			       printf("\n5 ----- Exit ");
			       printf("\nEnter the choice :");
			       scanf("%d",&choice1);
			       switch(choice1)
			       {
				case 1:for(i=0 ; i<Size ; i++)
				       {

						c[i] = a[i] + b[i];
						printf("%d + %d = %d \n", a[i] , b[i] , c[i]);

				       }
				       break;
				case 2:for(i=0 ; i<Size ; i++)
				       {
						c[i] = a[i] - b[i];
						printf("%d - %d = %d \n", a[i] , b[i] , c[i]);

				       }
				       break;
			       case 3:for(i=0 ; i<Size ; i++)
				       {
						c[i] = a[i] * b[i];
						printf("%d * %d = %d \n", a[i] , b[i] , c[i]);

				       }
				       break;
			       case 4:for(i=0 ; i<Size ; i++)
				       {
						c[i] = a[i] / b[i];
						printf("%d / %d = %d \n", a[i] , b[i] , c[i]);

				       }
				       break;
			       case 5: goto Operation;
			       }//switch choice1


			case 4:printf("\n1 ----- Addition");
			       printf("\n2 ----- Subtraction");
			       printf("\n3 ----- Multiplication");
			       printf("\n4 ----- Devision");
			       printf("\n5 ----- Exit ");
			       printf("\nEnter the choice :");
			       scanf("%d",&choice2);
			       switch(choice2)
			       {
				case 1:for(i=0 ; i<Size ; i++)
					{
						for(j=0 ; j<Size ; j++)
						{
							z[i][j] = x[i][j] + y[i][j];
							printf("%d + %d = %d \n",x[i][j],y[i][j],z[i][j]);


						}//in for

					}//out for
					break;
				case 2:for(i=0 ; i<Size ; i++)
					{
						for(j=0 ; j<Size ; j++)
						{
							z[i][j] = x[i][j] - y[i][j];
							printf("%d - %d = %d \n",x[i][j],y[i][j],z[i][j]);


						}//in for

					}//out for
					break;
				case 3:for(i=0 ; i<Size ; i++)
					{
						for(j=0 ; j<Size ; j++)
						{
							z[i][j] = x[i][j] * y[i][j];
							printf("%d * %d = %d \n",x[i][j],y[i][j],z[i][j]);


						}//in for

					}//out for
					break;
				case 4:for(i=0 ; i<Size ; i++)
					{
						for(j=0 ; j<Size ; j++)
						{
							z[i][j] = x[i][j] / y[i][j];
							printf("%d / %d = %d \n",x[i][j],y[i][j],z[i][j]);


						}//in for

					}//out for
					break;
				case 5: goto Operation;

			       }//switch choice2
		 goto Operation;
		 break;
		 }//switch choice


//	getch();
} //main