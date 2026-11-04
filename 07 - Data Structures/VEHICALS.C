/*
            Author : Ishaan Chauhan
            Objective : Vehicle Structure Management System
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 4

struct Vehicle
{
    int vehicleid;
    char name[50];
    float price;
    char type[20];
}v[SIZE];

int search(int id);
void displayparticular(int i);
void scan();
void display();
void update(int id);

void main()
{
    int choice, id, index;

    while(1)
    {
        clrscr();

        printf("\n1-----Scan Vehicles");
        printf("\n2-----Display Vehicles");
        printf("\n3-----Search Vehicle");
        printf("\n4-----Update Vehicle");
        printf("\n5-----EXIT");
        printf("\nEnter Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                scan();
                break;

            case 2:
                display();
                break;

            case 3:
                printf("\nEnter vehicle id to search : ");
                scanf("%d", &id);
                index = search(id);
                if(index != -1)
                {
                    printf("\nVehicle Found : %s | Price : %.2f | Type : %s", v[index].name, v[index].price, v[index].type);
                }
                else
                {
                    printf("\nVehicle with ID %d not found!", id);
                }
                break;

            case 4:
                printf("\nEnter vehicle id to update : ");
                scanf("%d", &id);
                update(id);
                break;

            case 5:
                exit(0);

            default:
                printf("\nInvalid Choice! Please try again.");
        }

        getch();
    }
}

int search(int id)
{
    int i;

    for(i = 0; i < SIZE; i++)
    {
        if(v[i].vehicleid == id)
        {
            return i;
        }
    }

    return -1;
}

void displayparticular(int i)
{
    printf("\n%d\t%s\t%.2f\t%s", v[i].vehicleid, v[i].name, v[i].price, v[i].type);
}

void scan()
{
    int i;
    float temp;

    for(i = 0; i < SIZE; i++)
    {
        printf("\nEnter details for Vehicle %d:", i + 1);
        printf("\nEnter Vehicle ID : ");
        scanf("%d", &v[i].vehicleid);
        printf("Enter Vehicle Name : ");
        scanf("%s", v[i].name);
        printf("Enter Price : ");
        scanf("%f", &temp);
        v[i].price = temp;
        printf("Enter Type : ");
        scanf("%s", v[i].type);
    }
}

void display()
{
    int i;

    printf("\nVehicle Details (%d Vehicles)", SIZE);
    printf("\n--------------------------------------------------------------");
    printf("\nID\tName\t\t\tPrice (Rs.)\tType");
    printf("\n--------------------------------------------------------------");

    for(i = 0; i < SIZE; i++)
    {
        printf("\n%d\t%-20s\t%.2f\t%s", v[i].vehicleid, v[i].name, v[i].price, v[i].type);
    }
    printf("\n--------------------------------------------------------------");
}

void update(int id)
{
    int index = search(id);
    float temp;

    if(index != -1)
    {
        printf("Enter new name : ");
        scanf("%s", v[index].name);
        printf("Enter new price : ");
        scanf("%f", &temp);
        v[index].price = temp;
        printf("Enter new type : ");
        scanf("%s", v[index].type);

        printf("\nUpdated Vehicle Details :");
        printf("\n%d | %s | %.2f | %s", v[index].vehicleid, v[index].name, v[index].price, v[index].type);
    }
    else
    {
        printf("\nVehicle with ID %d not found for update!", id);
    }
}