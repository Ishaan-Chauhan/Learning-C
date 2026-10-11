/*
    STRUTIL.C  (Turbo C++ style)
    String Utility Menu
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void reverseString(char str[]);
int isPalindrome(char str[]);
void countVowelsConsonants(char str[],int *vowels,int *consonants);
int countWords(char str[]);

int main()
{
    int choice,v,c;
    char str[100];

    do
    {
        printf("\n===== STRING UTILITIES =====\n");
        printf("1. Reverse a String\n");
        printf("2. Check Palindrome\n");
        printf("3. Count Vowels & Consonants\n");
        printf("4. Count Words\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        if(scanf("%d",&choice)!=1) {
            /* invalid input, clear and continue */
            int _c;
            while((_c=getchar())!=EOF && _c!='\n');
            choice=0;
        } else {
            /* cclsume leftover newline so fgets works correctly */
            int _c = getchar();
            (void)_c;
        }

        if(choice>=1 && choice<=4)
        {
            printf("Enter a string: ");
            if(fgets(str, sizeof(str), stdin)==NULL)
                str[0]='\0';
            else {
                /* remove trailing newline if present */
                size_t len = strlen(str);
                if(len>0 && str[len-1]=='\n')
                    str[len-1]='\0';
            }
        }

        switch(choice)
        {
            case 1:
                reverseString(str);
                printf("Reversed: %s\n",str);
                break;

            case 2:
                if(isPalindrome(str))
                    printf("\"%s\" is a palindrome.\n",str);
                else
                    printf("\"%s\" is not a palindrome.\n",str);
                break;

            case 3:
                v=0;
                c=0;
                countVowelsConsonants(str,&v,&c);
                printf("Vowels: %d, Consonants: %d\n",v,c);
                break;

            case 4:
                printf("Word count: %d\n",countWords(str));
                break;

            case 5:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice, try again.\n");
        }
    }while(choice!=5);

    getch();
    return 0;
}

void reverseString(char str[])
{
    int start=0,end=strlen(str)-1;
    char temp;

    while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}

int isPalindrome(char str[])
{
    int start=0,end=strlen(str)-1;

    while(start<end)
    {
        if(tolower(str[start])!=tolower(str[end]))
            return 0;
        start++;
        end--;
    }
    return 1;
}

void countVowelsConsonants(char str[],int *vowels,int *consonants)
{
    int i;
    char ch;

    *vowels=0;
    *consonants=0;

    for(i=0;str[i]!='\0';i++)
    {
        ch=tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            (*vowels)++;
        else if(ch>='a'&&ch<='z')
            (*consonants)++;
    }
}

int countWords(char str[])
{
    int words=0,insideWord=0,i;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ' && !insideWord)
        {
            insideWord=1;
            words++;
        }
        else if(str[i]==' ')
        {
            insideWord=0;
        }
    }
    return words;
    return 0;
}

