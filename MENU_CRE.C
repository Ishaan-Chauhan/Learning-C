/*
			Author - Ishaan Chauhan
			DOC - 7/7/26
			Objective - Menu Creation

*/
#include<stdio.h>
#include<conio.h>
void main(){
	int choice,choiceSouth,Quantity,totalBill,choicePunjab,choiceGuj,choiceIta;
	clrscr();
	printf("\n1------South Indian");
	printf("\n2------Punjabi");
	printf("\n3------Gujarati");
	printf("\n4------Italian") ;
	printf("\n5------Exit");
	printf("\nEnter choice");
	scanf("%d",&choice);
	switch(choice){
		case 1:printf("\n You have selected South Indian");
			printf("\n1-----Idli");
			printf("\n2-----Dosa");
			printf("\n3-----Vada");
			printf("\nEnter Choice");
			scanf("%d",&choiceSouth);
			switch(choiceSouth){
				case 1:printf("\nYou have selected Idli");
				       printf("\nHow many plates");
				       scanf("%d",&Quantity);
				       totalBill=40*Quantity;
				       printf("Your totalBill is %d",totalBill);
				       break;
				case 2:printf("\nYou have selected Dosa");
				       printf("\nHow many plates");
				       scanf("%d",&Quantity);
				       totalBill=50*Quantity;
				       printf("Your totalBill is %d",totalBill);
				       break;
				case 3:printf("\nYou have selected Vada");
				       printf("\nHow many plates");
				       scanf("%d",&Quantity);
				       totalBill=20*Quantity;
				       printf("Your totalBill is %d",totalBill);
				       break;
			}// switch South
		break;
		case 2:printf("\n You have selected Punjabi");
			printf("\n1-----Dal Makahani");
			printf("\n2-----Chole Bhature");
			printf("\n3-----Kadhi Chawal");
			printf("\nEnter Choice");
			scanf("%d",&choicePunjab);
			switch(choicePunjab){
				case 1:printf("\nYou have selected Dal Makahani");
				       printf("\nHow many plates");
				       scanf("%d",&Quantity);
				       totalBill=40*Quantity;
				       printf("Your totalBill is %d",totalBill);
				       break;
				case 2:printf("\nYou have selected Chole Bhature");
				       printf("How many plates");
				       scanf("%d",&Quantity);
				       totalBill=50*Quantity;
				       printf("YOur totalBill is %d",totalBill);
				       break;
				case 3:printf("\nYou have selected Kadhi Chawal");
				       printf("\nHow many plates");
				       scanf("%d",&Quantity);
				       totalBill=60*Quantity;
				       printf("Your totalBill is %d",totalBill);
				       break;
			}// switch punjabi
		break;
		case 3:printf("\n You have selected Gujarati");
		       printf("\n1-----Undhiyu");
			printf("\n2-----Dhokla");
			printf("\n3-----Thepla");
			printf("\nEnter Choice");
			scanf("%d",&choiceGuj);
			switch(choiceGuj){
				case 1:printf("\nYou have selected Undhiyu");
				       printf("\nHow many plates");
				       scanf("%d",&Quantity);
				       totalBill=40*Quantity;
				       printf("Your totalBill is %d",totalBill);
				       break;
				case 2:printf("\nYou have selected Dhokla");
				       printf("\nHow many plates");
				       scanf("%d",&Quantity);
				       totalBill=50*Quantity;
				       printf("Your totalBill is %d",totalBill);
				       break;
				case 3:printf("\nYou have selected Thepla");
				       printf("\nHow many plates");
				       scanf("%d",&Quantity);
				       totalBill=20*Quantity;
				       printf("Your totalBill is %d",totalBill);
				       break;
				}//switch of gujarati
		break;
		case 4:printf("\n You have selected Italian");
		       printf("\n1-----Pizza");
			printf("\n2-----Pasta");
			printf("\n3-----Lasagna");
			printf("\nEnter Choice");
			scanf("%d",&choiceIta);
			switch(choiceIta){
				case 1:printf("\nYou have selected Pizza");
				       printf("\nHow many plates");
				       scanf("%d",&Quantity);
				       totalBill=40*Quantity;
				       printf("Your totalBill is %d",totalBill);
				       break;
				case 2:printf("\nYou have selected Pasta");
				       printf("\nHow many plates");
				       scanf("%d",&Quantity);
				       totalBill=50*Quantity;
				       printf("Your totalBill is %d",totalBill);
				       break;
				case 3:printf("\nYou have selected Lasagna");
				       printf("\nHow many plates");
				       scanf("%d",&Quantity);
				       totalBill=60*Quantity;
				       printf("Your totalBill is %d",totalBill);
				       break;
			}// switch Ita
		break;
		case 5:printf("\nExit");
			exit(0);



}//switch 1
getch();
}//main