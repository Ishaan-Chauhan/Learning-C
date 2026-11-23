/*
				Author : Ishaan Chauhan
				DOC : 20 nov
				Objective : Car Structure
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 5

struct
{
	int vehicleId, flag;
	char name[30], fuel[10];
	float mileage;
}v[SIZE];

void scan();
void display();
void displayParticular(int i);
int search(int id);
void update(int i);
void dele(int i);

void main()
{
	int choice, id, index;

	while(1)
	{
		clrscr();

		printf("\n1-------Scan");
		printf("\n2-------Display");
		printf("\n3-------Display Particular");
		printf("\n4-------Update Vehicle");
		printf("\n5-------Delete Vehicle");
		printf("\n6-------EXIT");
		printf("\nEnter Choice : ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1: scan();
				break;

			case 2: display();
				break;

			case 3: printf("\nEnter id to Display Particular : ");
				scanf("%d", &id);

				index = search(id);
				if(index == -1)
				{
					printf("\nVehicle ID not in List");
				}
				else
				{
					displayParticular(index);
				}
				break;

			case 4: printf("\nEnter ID to Update Vehicle : ");
				scanf("%d", &id);

				index = search(id);
				if(index == -1)
				{
					printf("\nVehicle ID not in List");
				}
				else
				{
					update(index);
				}
				break;

			case 5: printf("\nEnter ID to Delete Vehicle : ");
				scanf("%d", &id);

				index = search(id);
				if(index == -1)
				{
					printf("\nVehicle ID not in List");
				}
				else
				{
					dele(index);
				}
				break;


			case 6: exit(0);
		}//end of switch

		getch();
	}//end of while
}//end of main

void scan()
{
	int i;
	float temp;

	for(i = 0; i < SIZE; i++)
	{
		printf("\nEnter Vehicle ID, Name, Fuel Type and Mileage : ");
		scanf("%d%s%s%f", &v[i].vehicleId, v[i].name, v[i].fuel, &temp);

		v[i].mileage = temp;

		v[i].flag = 1;
	}//end of for
}//end of scan

void display()
{
	int i;

	printf("\nID\tName\tFuel\tMileage");
	printf("\n------------------------------------");

	for(i = 0; i < SIZE; i++)
	{
		if(v[i].flag == 1)
		{
			printf("\n%d\t%s\t%s\t%.2f", v[i].vehicleId, v[i].name, v[i].fuel, v[i].mileage);
		}//end of if
	}//end of for
}//end of diaplay

int search(id)
{
	int i;

	for(i = 0; i < SIZE; i++)
	{
		if(v[i].vehicleId == id && v[i].flag == 1)
		{
			return i;
		}//end of if
	}//end of for

	return -1;
}//end of search

void displayParticular(index)
{
	int i;

	i = index;

	printf("\nID\tName\tFuel\tMileage");
	printf("\n------------------------------------");
	if(v[i].flag == 1)
	{
		printf("\n%d\t%s\t%s\t%.2f", v[i].vehicleId, v[i].name, v[i].fuel, v[i].mileage);
	}//end of if
}//end of displayPArticular

void update(index)
{
	int i, choice;
	float temp;

	i = index;

	printf("\n1--------Update Name");
	printf("\n2--------Update Fuel Type");
	printf("\n3--------Update Mileage");
	printf("\nEnter Choice : ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1: printf("\nEnter Updated Name : ");
			scanf("%s", v[i].name);
			break;

		case 2: printf("\nEnter Updated Fuel Type : ");
			scanf("%s", v[i].fuel);
			break;

		case 3: printf("\nEnter Updated Mileage : ");
			scanf("%f", &temp);
			v[i].mileage = temp;
			break;
	}

	printf("\nUpdated Succesfully");
}//end of Update

void dele(index)
{
	int i;

	i = index;

	v[i].flag = -1;

	printf("\nDeleted Successfully");
}//end of dele