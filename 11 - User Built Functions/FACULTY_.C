/*
			Author : Jay
			DOC : 29 oct
			Objective : Faculty- structure
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 5
struct Faculty
{
	int facultyid;
	char name[30];
	float salary;
}f[SIZE];
int search(int id);
void displayparticular();
void scan();
void display();

void main()
{
	int choice, id, index;

	while(1)
	{
		clrscr();

		printf("\n1-----Scan");
		printf("\n2-----Display");
		printf("\n3-----Search");
		printf("\n4-----EXIT");
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
				printf("\nEnter ID :");
				scanf("%d", &id);
				index = search(id);
				displayparticular(index);
				break;

			case 4:
				exit(0);
		}

		getch();
	}
}

int search(int id)
{
	int i;

	for(i = 0; i < SIZE; i++)
	{
		if(f[i].facultyid == id)
		{
			return i;
		}

	}

	return -1;

}

void displayparticular(int i)
{
	printf("\n%d\t%s\t%.2f", f[i].facultyid, f[i].name, f[i].salary);
}

void scan()
{
	int i;
	float temp;

	for(i = 0; i < SIZE; i++)
	{
		printf("\nEnter Faculty ID : ");
		scanf("%d", &f[i].facultyid);
		printf("Enter Faculty Nmae : ");
		scanf("%s", f[i].name);
		printf("Enter Salary : ");
		scanf("%f", &temp);

		f[i].salary = temp;
	}
}

void display()
{
	int i;

	printf("\nID\tName\tSalary");
	printf("\n---------------------");

	for(i = 0; i < SIZE; i++)
	{
		printf("\n%d\t%s\t%.2f", f[i].facultyid, f[i].name, f[i].salary);
	}
}