#include<stdio.h>
int main()
{
    char name[100] , nametoggle[100];
    int i;
    printf("Enter the word that need to be converted\n");
    gets(name);

    for(i=0 ; name[i]!='\0' ; i++)
    {
        if (name[i]>='A' && name[i]<='Z')
        {
            nametoggle[i] = name[i] + 32; 
        }
        else
        {
            nametoggle[i] = name[i] - 32;
        }

    }
    nametoggle[i] = '\0';
    printf("The converted word is : %s",nametoggle);
    return 0;
}