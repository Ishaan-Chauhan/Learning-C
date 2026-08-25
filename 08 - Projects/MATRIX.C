/*
    MATRIX.C  (Turbo C++ style)
    Matrix Operations using 2D arrays
    - Addition, Subtraction, Multiplication, Transpose
*/

#include<stdio.h>
#include<conio.h>

#define MAXR 10
#define MAXC 10

int a[MAXR][MAXC],b[MAXR][MAXC],result[MAXR][MAXC];
int r1,c1,r2,c2;

void inputMatrix(int m[MAXR][MAXC],int r,int c,char name);
void displayMatrix(int m[MAXR][MAXC],int r,int c);
void addMatrix();
void subMatrix();
void multiplyMatrix();
void transposeMatrix();

void main()
{
    int choice;
    clrscr();

    do
    {
        printf("\n===== MATRIX OPERATIONS =====\n");
        printf("1. Enter Matrix A\n");
        printf("2. Enter Matrix B\n");
        printf("3. Add A + B\n");
        printf("4. Subtract A - B\n");
        printf("5. Multiply A x B\n");
        printf("6. Transpose of A\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter rows and columns for Matrix A: ");
                scanf("%d %d",&r1,&c1);
                inputMatrix(a,r1,c1,'A');
                break;

            case 2:
                printf("Enter rows and columns for Matrix B: ");
                scanf("%d %d",&r2,&c2);
                inputMatrix(b,r2,c2,'B');
                break;

            case 3:
                addMatrix();
                break;

            case 4:
                subMatrix();
                break;

            case 5:
                multiplyMatrix();
                break;

            case 6:
                transposeMatrix();
                break;

            case 7:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice, try again.\n");
        }
    }while(choice!=7);

    getch();
}

void inputMatrix(int m[MAXR][MAXC],int r,int c,char name)
{
    int i,j;

    printf("Enter %d elements for Matrix %c:\n",r*c,name);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
}

void displayMatrix(int m[MAXR][MAXC],int r,int c)
{
    int i,j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}

void addMatrix()
{
    int i,j;

    if(r1!=r2 || c1!=c2)
    {
        printf("Matrices must have the same size to add.\n");
        return;
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            result[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("Result of A + B:\n");
    displayMatrix(result,r1,c1);
}

void subMatrix()
{
    int i,j;

    if(r1!=r2 || c1!=c2)
    {
        printf("Matrices must have the same size to subtract.\n");
        return;
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            result[i][j]=a[i][j]-b[i][j];
        }
    }

    printf("Result of A - B:\n");
    displayMatrix(result,r1,c1);
}

void multiplyMatrix()
{
    int i,j,k;

    if(c1!=r2)
    {
        printf("Columns of A must equal rows of B to multiply.\n");
        return;
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            result[i][j]=0;
            for(k=0;k<c1;k++)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    printf("Result of A x B:\n");
    displayMatrix(result,r1,c2);
}

void transposeMatrix()
{
    int i,j;

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            result[j][i]=a[i][j];
        }
    }

    printf("Transpose of A:\n");
    displayMatrix(result,c1,r1);
}
