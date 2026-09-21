#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
    char str1[max] , str2[max] , str3[max];
    int res , len;

    printf("Enter the name :");
    fgets(str1, max, stdin);
    printf("Enter another name :");
    fgets(str2, max, stdin);
/*------------------------------------------------------------------*/
    
    //compares two strings and if res == 0 then only string are same
    res = strcmp(str1, str2);
    if(res == 0)
        printf("\nBoth strings are equal.\n");
    else
        printf("\nStrings are not equal.\n");
/*------------------------------------------------------------------*/
   
    //finds length of the string
    len = strlen(str1);
    printf("len = %d\n",len);

/*--------------------------------------------------------------------*/
   
    //copy the string
    strcpy(str3,str1);
    printf("copystring = %s\n",str3);
/*--------------------------------------------------------------------*/
    //reverse the string
    strrev(str2);
    printf("reversed string = %s\n",str2);
/*--------------------------------------------------------------------*/

    //Capital to Lowercase
    strlwr(str1);
    printf("Lowercase string = %s\n",str1);
/*--------------------------------------------------------------------*/

    //Lowercase to Capital
    strupr(str2);
    printf("Uppercase string = %s\n",str2);

}