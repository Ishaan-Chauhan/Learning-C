#include <stdio.h>
//print total increment of employee..
//if user inserted employee salary 1000 rs and give 2 increment of 100,200 respectivly
//find base salary.. 

struct Employee
{
    int eid;
    char ename[20];
    float empSalary;
    int increments[2];
    int totalIncremnt;
    int baseSalary;
} e[3];

void getEmployeeDetails()
{

    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("\n enter %d employee id :", i + 1);
        scanf("%d", &e[i].eid);
        printf("\n enter %d employee name :", i + 1);
        scanf("%s", &e[i].ename);
        printf("\n enter %d employee salary :", i + 1);
        scanf("%f", &e[i].empSalary);

        for (j = 0; j < 2; j++)
        {
            printf("\n enter %d incrment :", j + 1);
            scanf("%d", &e[i].increments[j]);
        }
    }
}

void printEmployeeDetails()
{

    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("\n %d employee id = %d :", i + 1, e[i].eid);

        printf("\n  %d employee name = %s :", i + 1, e[i].ename);

        printf("\n %d employee salary = %f :", i + 1, e[i].empSalary);

        for (j = 0; j < 2; j++)
        {
            printf("\n %d incrment = %d", j + 1, e[i].increments[j]);
        }
    }
}

void main()
{
    getEmployeeDetails();
    printEmployeeDetails();
}