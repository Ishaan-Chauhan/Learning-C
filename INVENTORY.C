/*
    INVENTORY.C  (Turbo C++ style)
    Inventory / Stock Management System
    - Add items, update stock, low-stock alert, saved to file
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

#define MAX 50
#define FILENAME "inventory.dat"
#define LOW_STOCK_LIMIT 5

struct Item
{
    int itemId;
    char name[30];
    int quantity;
    float price;
};

struct Item items[MAX];
int total=0;

void addItem();
void displayItems();
void updateStock();
void lowStockAlert();
void saveToFile();
void loadFromFile();

void main()
{
    int choice;
    clrscr();
    loadFromFile();

    do
    {
        printf("\n===== INVENTORY MANAGEMENT =====\n");
        printf("1. Add Item\n");
        printf("2. Display All Items\n");
        printf("3. Update Stock (add/remove quantity)\n");
        printf("4. Show Low Stock Items\n");
        printf("5. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addItem();
                break;
            case 2:
                displayItems();
                break;
            case 3:
                updateStock();
                break;
            case 4:
                lowStockAlert();
                break;
            case 5:
                saveToFile();
                printf("Data saved. Goodbye!\n");
                break;
            default:
                printf("Invalid choice, try again.\n");
        }
    }while(choice!=5);

    getch();
}

void addItem()
{
    struct Item it;

    if(total>=MAX)
    {
        printf("Inventory is full!\n");
        return;
    }

    printf("Enter Item ID: ");
    scanf("%d",&it.itemId);
    printf("Enter Item Name: ");
    scanf(" %[^\n]",it.name);
    printf("Enter Quantity: ");
    scanf("%d",&it.quantity);
    printf("Enter Price: ");
    scanf("%f",&it.price);

    items[total]=it;
    total++;
    printf("Item added successfully.\n");
}

void displayItems()
{
    int i;

    if(total==0)
    {
        printf("No items in inventory.\n");
        return;
    }

    printf("\n%-6s %-20s %-10s %-10s\n","ID","Name","Qty","Price");
    for(i=0;i<total;i++)
    {
        printf("%-6d %-20s %-10d %-10.2f\n",
               items[i].itemId,items[i].name,items[i].quantity,items[i].price);
    }
}

void updateStock()
{
    int id,i,found=0,change;

    printf("Enter Item ID: ");
    scanf("%d",&id);

    for(i=0;i<total;i++)
    {
        if(items[i].itemId==id)
        {
            found=1;
            printf("Enter quantity to add (use negative number to remove stock): ");
            scanf("%d",&change);

            if(items[i].quantity+change<0)
            {
                printf("Not enough stock to remove that much.\n");
            }
            else
            {
                items[i].quantity+=change;
                printf("Stock updated. New quantity: %d\n",items[i].quantity);
            }
            break;
        }
    }

    if(!found)
        printf("Item ID not found.\n");
}

void lowStockAlert()
{
    int i,any=0;

    printf("\nItems with stock below %d:\n",LOW_STOCK_LIMIT);
    for(i=0;i<total;i++)
    {
        if(items[i].quantity<LOW_STOCK_LIMIT)
        {
            printf("- %s (Qty: %d)\n",items[i].name,items[i].quantity);
            any=1;
        }
    }

    if(!any)
        printf("No low stock items. All good!\n");
}

void saveToFile()
{
    FILE *fp;

    fp=fopen(FILENAME,"wb");
    if(fp==NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }
    fwrite(&total,sizeof(int),1,fp);
    fwrite(items,sizeof(struct Item),total,fp);
    fclose(fp);
}

void loadFromFile()
{
    FILE *fp;

    fp=fopen(FILENAME,"rb");
    if(fp==NULL)
        return;

    fread(&total,sizeof(int),1,fp);
    fread(items,sizeof(struct Item),total,fp);
    fclose(fp);
}
