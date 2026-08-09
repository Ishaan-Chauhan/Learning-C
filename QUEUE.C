/*
    QUEUE.C  (Turbo C++ style)
    Queue Implementation using Array (FIFO)
    - Enqueue, Dequeue, Peek Front, Display
*/

#include<stdio.h>
#include<conio.h>

#define MAX 50

int queue[MAX];
int front=-1,rear=-1;

void enqueue();
void dequeue();
void peekFront();
void display();

void main()
{
    int choice;
    clrscr();

    do
    {
        printf("\n===== QUEUE OPERATIONS =====\n");
        printf("1. Enqueue (add)\n");
        printf("2. Dequeue (remove)\n");
        printf("3. Peek Front\n");
        printf("4. Display Queue\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peekFront();
                break;
            case 4:
                display();
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

void enqueue()
{
    int value;

    if(rear>=MAX-1)
    {
        printf("Queue Overflow! Cannot add more.\n");
        return;
    }

    printf("Enter value to add: ");
    scanf("%d",&value);

    if(front==-1)
        front=0;

    rear++;
    queue[rear]=value;
    printf("%d added to queue.\n",value);
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("Queue Underflow! Queue is empty.\n");
        front=-1;
        rear=-1;
        return;
    }

    printf("%d removed from queue.\n",queue[front]);
    front++;

    if(front>rear)
    {
        front=-1;
        rear=-1;
    }
}

void peekFront()
{
    if(front==-1 || front>rear)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Front element: %d\n",queue[front]);
}

void display()
{
    int i;

    if(front==-1 || front>rear)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue (front to rear): ");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
}
