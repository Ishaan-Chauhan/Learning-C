/*
    LIBRARY.C  (Turbo C++ style)
    Library Management System
    - Add books, display, issue/return, search
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

#define MAX 50

struct Book
{
    int bookId;
    char title[50];
    char author[30];
    int isIssued;   /* 0 = available, 1 = issued */
};

struct Book books[MAX];
int total=0;

void addBook();
void displayBooks();
void issueBook();
void returnBook();
void searchBook();

void main()
{
    int choice;
    clrscr();

    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Search Book by ID\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                issueBook();
                break;
            case 4:
                returnBook();
                break;
            case 5:
                searchBook();
                break;
            case 6:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice, try again.\n");
        }
    }while(choice!=6);

    getch();
}

void addBook()
{
    struct Book b;

    if(total>=MAX)
    {
        printf("Library is full!\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d",&b.bookId);
    printf("Enter Title: ");
    scanf(" %[^\n]",b.title);
    printf("Enter Author: ");
    scanf(" %[^\n]",b.author);
    b.isIssued=0;

    books[total]=b;
    total++;
    printf("Book added successfully.\n");
}

void displayBooks()
{
    int i;

    if(total==0)
    {
        printf("No books in library.\n");
        return;
    }

    printf("\n%-6s %-20s %-15s %-10s\n","ID","Title","Author","Status");
    for(i=0;i<total;i++)
    {
        printf("%-6d %-20s %-15s %-10s\n",
               books[i].bookId,
               books[i].title,
               books[i].author,
               books[i].isIssued ? "Issued" : "Available");
    }
}

void issueBook()
{
    int id,i,found=0;

    printf("Enter Book ID to issue: ");
    scanf("%d",&id);

    for(i=0;i<total;i++)
    {
        if(books[i].bookId==id)
        {
            found=1;
            if(books[i].isIssued)
                printf("Book is already issued.\n");
            else
            {
                books[i].isIssued=1;
                printf("Book issued successfully.\n");
            }
            break;
        }
    }

    if(!found)
        printf("Book ID not found.\n");
}

void returnBook()
{
    int id,i,found=0;

    printf("Enter Book ID to return: ");
    scanf("%d",&id);

    for(i=0;i<total;i++)
    {
        if(books[i].bookId==id)
        {
            found=1;
            if(!books[i].isIssued)
                printf("This book was not issued.\n");
            else
            {
                books[i].isIssued=0;
                printf("Book returned successfully.\n");
            }
            break;
        }
    }

    if(!found)
        printf("Book ID not found.\n");
}

void searchBook()
{
    int id,i,found=0;

    printf("Enter Book ID to search: ");
    scanf("%d",&id);

    for(i=0;i<total;i++)
    {
        if(books[i].bookId==id)
        {
            printf("Title: %s\nAuthor: %s\nStatus: %s\n",
                   books[i].title,
                   books[i].author,
                   books[i].isIssued ? "Issued" : "Available");
            found=1;
            break;
        }
    }

    if(!found)
        printf("Book ID not found.\n");
}
