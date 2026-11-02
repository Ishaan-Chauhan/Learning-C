
struct fruit
{
	int fruitid;
	char name[30];             // members of structure
	float fee;

}f1,f2,f3;          // variables of structure

void ScanDetails();
void DisplayDetails();

void main()
{
	while(1)
	{
		int choice;
		clrscr(
		);
		printf("\n1 ----- Scan Details");
		printf("\n2 ----- Display Details");
		printf("\n3 ----- Exit \n ");
		printf("Enter your choice :: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: ScanDetails();
				break;

			case 2: DisplayDetails();
				break;

			case 3: exit(0);


		}// switch

	getch();

	}// while



}// main

void ScanDetails()
{
	float temp;
	printf("\nEnter the Fruit id , name , fees ");
	scanf("%d",&f1.fruitid);
	scanf("%s",f1.name);
	scanf("%f",&temp);
	f1.fee =  temp;

	printf("\nEnter the Fruit id , name , fees ");
	scanf("%d",&f2.fruitid);
	scanf("%s",f2.name);
	scanf("%f",&temp);
	f2.fee =  temp;

	printf("\nEnter the Fruit id , name , fees ");
	scanf("%d",&f3.fruitid);
	scanf("%s",f3.name);
	scanf("%f",&temp);
	f3.fee =  temp;



}//ssd
void DisplayDetails()
{
	printf("Fruit 1 --> id is %d | Name is %s | Cost is %f\n",f1.fruitid,f1.name,f1.fee);
	printf("Fruit 2 --> id is %d | Name is %s | Cost is %f\n",f2.fruitid,f2.name,f2.fee);
	printf("Fruit 3 --> id is %d | Name is %s | Cost is %f\n",f3.fruitid,f3.name,f3.fee);



}