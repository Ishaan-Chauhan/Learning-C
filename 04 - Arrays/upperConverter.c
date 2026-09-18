#include<stdio.h>
int main()
{
    char name[100] , nameUpper[100];
    int i;
    printf("Enter the word that need to be converted\n");
    gets(name);

    for(i=0 ; name[i]!='\0' ; i++)
    {
        if (name[i]>='A' && name[i]<='Z')
        {
            nameUpper[i] = name[i];
        }
        else
        {
            nameUpper[i] = name[i];
        }
        
    }
    nameUpper[i] = '\0';
    printf("The converted word is : %s",nameUpper);
    return 0;
}