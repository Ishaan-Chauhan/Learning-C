#include<stdio.h>
int main()
{
    char name[100] , namelower[100];
    int i;
    printf("Enter the word that need to be converted\n");
    gets(name);

    for(i=0 ; name[i]!='\0' ; i++)
    {
        if (name[i]>='A' && name[i]<='Z')
        {
            namelower[i] = name[i] + 32; 
        }
        else
        {
            namelower[i] = name[i];
        }

    }
    namelower[i] = '\0';
    printf("The converted word is : %s",namelower);
    return 0;
}