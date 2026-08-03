/*
    BANKSIM.C  (Turbo C++ style)
    Simple Bank Account Simulation
    - Multiple accounts, deposit/withdraw, saved to file
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

#define MAX 50
#define FILENAME "accounts.dat"

struct Account
{
    int accNo;
    char name[30];
    float balance;
};

struct Account accounts[MAX];
int total=0;

void createAccount();
void deposit();
void withdraw();
void checkBalance();
void displayAll();
void saveToFile();
void loadFromFile();

void main()
{
    int choice;
    clrscr();
    loadFromFile();

    do
    {
        printf("\n===== BANK ACCOUNT SIMULATION =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                displayAll();
                break;
            case 6:
                saveToFile();
                printf("Data saved. Goodbye!\n");
                break;
            default:
                printf("Invalid choice, try again.\n");
        }
    }while(choice!=6);

    getch();
}

void createAccount()
{
    struct Account a;

    if(total>=MAX)
    {
        printf("Account list is full!\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d",&a.accNo);
    printf("Enter Name: ");
    scanf(" %[^\n]",a.name);
    printf("Enter Opening Balance: ");
    scanf("%f",&a.balance);

    accounts[total]=a;
    total++;
    printf("Account created successfully.\n");
}

void deposit()
{
    int accNo,i,found=0;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d",&accNo);

    for(i=0;i<total;i++)
    {
        if(accounts[i].accNo==accNo)
        {
            found=1;
            printf("Enter amount to deposit: ");
            scanf("%f",&amount);
            accounts[i].balance+=amount;
            printf("Deposit successful. New balance: %.2f\n",accounts[i].balance);
            break;
        }
    }

    if(!found)
        printf("Account not found.\n");
}

void withdraw()
{
    int accNo,i,found=0;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d",&accNo);

    for(i=0;i<total;i++)
    {
        if(accounts[i].accNo==accNo)
        {
            found=1;
            printf("Enter amount to withdraw: ");
            scanf("%f",&amount);

            if(amount>accounts[i].balance)
                printf("Insufficient balance.\n");
            else
            {
                accounts[i].balance-=amount;
                printf("Withdrawal successful. New balance: %.2f\n",accounts[i].balance);
            }
            break;
        }
    }

    if(!found)
        printf("Account not found.\n");
}

void checkBalance()
{
    int accNo,i,found=0;

    printf("Enter Account Number: ");
    scanf("%d",&accNo);

    for(i=0;i<total;i++)
    {
        if(accounts[i].accNo==accNo)
        {
            printf("Account Holder: %s\nBalance: %.2f\n",accounts[i].name,accounts[i].balance);
            found=1;
            break;
        }
    }

    if(!found)
        printf("Account not found.\n");
}

void displayAll()
{
    int i;

    if(total==0)
    {
        printf("No accounts found.\n");
        return;
    }

    printf("\n%-10s %-20s %-10s\n","Acc No","Name","Balance");
    for(i=0;i<total;i++)
    {
        printf("%-10d %-20s %-10.2f\n",accounts[i].accNo,accounts[i].name,accounts[i].balance);
    }
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
    fwrite(accounts,sizeof(struct Account),total,fp);
    fclose(fp);
}

void loadFromFile()
{
    FILE *fp;

    fp=fopen(FILENAME,"rb");
    if(fp==NULL)
        return;

    fread(&total,sizeof(int),1,fp);
    fread(accounts,sizeof(struct Account),total,fp);
    fclose(fp);
}
