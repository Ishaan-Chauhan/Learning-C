/*
    STACKQ.C  (Turbo C++ style)
    Stack Implementation using Array
    - Push, Pop, Peek, Display
    - Includes a bracket-matching demo using the stack
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

#define MAX 50

int stack[MAX];
int top=-1;

void push();
void pop();
void peek();
void display();
void checkBrackets();

void main()
{
    int choice;
    clrscr();

    do
    {
        printf("\n===== STACK OPERATIONS =====\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek (view top)\n");
        printf("4. Display Stack\n");
        printf("5. Check Balanced Brackets (demo)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                checkBrackets();
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

void push()
{
    int value;

    if(top>=MAX-1)
    {
        printf("Stack Overflow! Cannot push.\n");
        return;
    }

    printf("Enter value to push: ");
    scanf("%d",&value);

    top++;
    stack[top]=value;
    printf("%d pushed onto stack.\n",value);
}

void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow! Stack is empty.\n");
        return;
    }

    printf("%d popped from stack.\n",stack[top]);
    top--;
}

void peek()
{
    if(top==-1)
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("Top element: %d\n",stack[top]);
}

void display()
{
    int i;

    if(top==-1)
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack (top to bottom): ");
    for(i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}

void checkBrackets()
{
    /* small demo showing a real use of a stack: matching ( ) [ ] { } */
    char expr[100];
    char charStack[MAX];
    int cTop=-1;
    int i,balanced=1;
    char ch,open;

    printf("Enter an expression with brackets, e.g. {[()]}: ");
    fflush(stdin);
    gets(expr);

    for(i=0;expr[i]!='\0';i++)
    {
        ch=expr[i];

        if(ch=='('||ch=='['||ch=='{')
        {
            cTop++;
            charStack[cTop]=ch;
        }
        else if(ch==')'||ch==']'||ch=='}')
        {
            if(cTop==-1)
            {
                balanced=0;
                break;
            }

            open=charStack[cTop];
            cTop--;

            if((ch==')' && open!='(') ||
               (ch==']' && open!='[') ||
               (ch=='}' && open!='{'))
            {
                balanced=0;
                break;
            }
        }
    }

    if(cTop!=-1)
        balanced=0;

    if(balanced)
        printf("Brackets are balanced.\n");
    else
        printf("Brackets are NOT balanced.\n");
}
