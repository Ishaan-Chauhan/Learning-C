#include<stdio.h>
#include<string.h>
#define max 100

int main()
{
    char str1[max] , str2[max];
    int res;

    printf("Enter name :");
    gets(str1);


    strcpy(str2,str1);
    strrev(str2);
    res = strcmp(str1,str2);

    if (res == 0)
    {
        printf("The string is palindrome");
    }
    else
    {
        printf("The string is not palindrome");
    }

}