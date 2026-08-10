/*
    LINKEDLIST.C  (Turbo C++ style)
    Singly Linked List using pointers and malloc
    - Insert at end, Display, Delete by value, Count nodes

    This is different from the earlier programs: instead of a
    fixed-size array (like list[MAX] in STUDENT_DB.C), nodes are
    created one at a time in memory and linked together with
    pointers. The list can grow as long as memory allows.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

void insertEnd();
void display();
void deleteValue();
int countNodes();

void main()
{
    int choice;
    clrscr();

    do
    {
        printf("\n===== SINGLY LINKED LIST =====\n");
        printf("1. Insert at End\n");
        printf("2. Display List\n");
        printf("3. Delete by Value\n");
        printf("4. Count Nodes\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                insertEnd();
                break;
            case 2:
                display();
                break;
            case 3:
                deleteValue();
                break;
            case 4:
                printf("Number of nodes: %d\n",countNodes());
                break;
            case 5:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice, try again.\n");
        }
    }while(choice!=5);

    getch();
}

void insertEnd()
{
    struct Node *newNode,*temp;
    int value;

    printf("Enter value to insert: ");
    scanf("%d",&value);

    newNode=(struct Node *)malloc(sizeof(struct Node));
    if(newNode==NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data=value;
    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }

    printf("%d inserted at end.\n",value);
}

void display()
{
    struct Node *temp=head;

    if(head==NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("List: ");
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

void deleteValue()
{
    struct Node *temp,*prev;
    int value,found=0;

    if(head==NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("Enter value to delete: ");
    scanf("%d",&value);

    /* case 1: value is in the head node */
    if(head->data==value)
    {
        temp=head;
        head=head->next;
        free(temp);
        printf("%d deleted.\n",value);
        return;
    }

    /* case 2: search the rest of the list */
    prev=head;
    temp=head->next;

    while(temp!=NULL)
    {
        if(temp->data==value)
        {
            prev->next=temp->next;
            free(temp);
            found=1;
            printf("%d deleted.\n",value);
            break;
        }
        prev=temp;
        temp=temp->next;
    }

    if(!found)
        printf("Value %d not found in list.\n",value);
}

int countNodes()
{
    struct Node *temp=head;
    int count=0;

    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }

    return count;
}
