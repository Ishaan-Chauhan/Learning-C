#include<stdio.h>
void main()
{
    char name[100];
    int i , countA=0 , count=0;

    printf("Enter the word that need to be counted\n");
    gets(name);

    for(i=0 ; name[i]!='\0' ; i++)
    {
        if((name[i]>='a' && name[i]<='z')) 
        {
            count++;
        }
        if((name[i]>='A' && name[i]<='Z')) 
        {
            countA++;
        }


    }
    printf("Cap count is : %d\n",countA);
    printf("small count is : %d\n",count);

    
}