/*
				Author : Ishaan Chauhan
				DOC : 23 nov
				Objective : Hotel Room Management Structure
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 10

struct Hotel
{
	int roomNumber, isBooked, flag;
	char roomType[20];
	float pricePerNight;
}h[SIZE];

void create();
void display();
int search(int rNo);
void displayParticular(int i);
void update(int i);
void dele(int i);
void findStatusOfRoom(int i);

void main()
{
	int choice, rNo, index;

	while(1)
	{
		clrscr();

		printf("\n1-------Create (Add 10 Rooms)");
		printf("\n2-------Display All Rooms");
		printf("\n3-------Search Room");
		printf("\n4-------Update Room");
		printf("\n5-------Delete Room");
		printf("\n6-------Find Status Of Room");
		printf("\n7-------EXIT");
		printf("\nEnter Choice : ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1: create();
				break;

			case 2: display();
				break;

			case 3: printf("\nEnter Room Number to Search : ");
				scanf("%d", &rNo);

				index = search(rNo);
				if(index == -1)
				{
					printf("\nRoom Number not in List");
				}
				else
				{
					displayParticular(index);
				}
				break;

			case 4: printf("\nEnter Room Number to Update : ");
				scanf("%d", &rNo);

				index = search(rNo);
				if(index == -1)
				{
					printf("\nRoom Number not in List");
				}
				else
				{
					update(index);
				}
				break;

			case 5: printf("\nEnter Room Number to Delete : ");
				scanf("%d", &rNo);

				index = search(rNo);
				if(index == -1)
				{
					printf("\nRoom Number not in List");
				}
				else
				{
					dele(index);
				}
				break;

			case 6: printf("\nEnter Room Number to Check Status : ");
				scanf("%d", &rNo);

				index = search(rNo);
				if(index == -1)
				{
					printf("\nRoom Number not in List");
				}
				else
				{
					findStatusOfRoom(index);
				}
				break;

			case 7: exit(0);
		}//end of switch

		getch();
	}//end of while
}//end of main

void create()
{
	int i;
	float temp;

	for(i = 0; i < SIZE; i++)
	{
		printf("\nEnter Room Number, Room Type, Price Per Night and IsBooked (1/0) : ");
		scanf("%d%s%f%d", &h[i].roomNumber, h[i].roomType, &temp, &h[i].isBooked);

		h[i].pricePerNight = temp;
		h[i].flag = 1;
	}//end of for
}//end of create

void display()
{
	int i;

	printf("\nRoomNo\tType\t\tPrice\t\tStatus");
	printf("\n----------------------------------------------------");

	for(i = 0; i < SIZE; i++)
	{
		if(h[i].flag == 1)
		{
			printf("\n%d\t%s\t\t%.2f\t\t", h[i].roomNumber, h[i].roomType, h[i].pricePerNight);
			if(h[i].isBooked == 1)
			{
				printf("Booked");
			}
			else
			{
				printf("Available");
			}
		}//end of if
	}//end of for
}//end of display

int search(int rNo)
{
	int i;

	for(i = 0; i < SIZE; i++)
	{
		if(h[i].roomNumber == rNo && h[i].flag == 1)
		{
			return i;
		}//end of if
	}//end of for

	return -1;
}//end of search

void displayParticular(int index)
{
	int i;

	i = index;

	printf("\nRoomNo\tType\t\tPrice\t\tStatus");
	printf("\n----------------------------------------------------");
	if(h[i].flag == 1)
	{
		printf("\n%d\t%s\t\t%.2f\t\t", h[i].roomNumber, h[i].roomType, h[i].pricePerNight);
		if(h[i].isBooked == 1)
		{
			printf("Booked");
		}
		else
		{
			printf("Available");
		}
	}//end of if
}//end of displayParticular

void update(int index)
{
	int i, choice;
	float temp;

	i = index;

	printf("\n1--------Update Room Type");
	printf("\n2--------Update Price Per Night");
	printf("\n3--------Update Booking Status");
	printf("\nEnter Choice : ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1: printf("\nEnter Updated Room Type : ");
			scanf("%s", h[i].roomType);
			break;

		case 2: printf("\nEnter Updated Price Per Night : ");
			scanf("%f", &temp);
			h[i].pricePerNight = temp;
			break;

		case 3: printf("\nEnter Updated Status (1 for Booked, 0 for Available) : ");
			scanf("%d", &h[i].isBooked);
			break;
	}//end of switch

	printf("\nUpdated Successfully");
}//end of update

void dele(int index)
{
	int i;

	i = index;

	h[i].flag = -1;

	printf("\nDeleted Successfully");
}//end of dele

void findStatusOfRoom(int index)
{
	int i;

	i = index;

	if(h[i].flag == 1)
	{
		if(h[i].isBooked == 1)
		{
			printf("\nRoom %d is Booked", h[i].roomNumber);
		}
		else
		{
			printf("\nRoom %d is Available", h[i].roomNumber);
		}
	}//end of if
}//end of findStatusOfRoom
