#include <stdio.h>
#include <string.h>

void lengthFunction(char str[])
{
    int count = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("Logic -- Length of '%s' is %d\n\n", str, count);
}

void uppercaseFunction(char str[])
{
    int i = 0;

    printf("Logic -- UpperCase of '%s' is ", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("is '%s'\n\n", str);
}

void lowercaseFunction(char str[])
{
    int i = 0;

    printf("Logic -- Lowercase of '%s' is ", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    printf("is '%s'\n\n", str);
}

void copyFunction(char str[])
{
    char copy[40];
    int i = 0;

    while (str[i] != '\0')
    {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';
    printf("Logic -- Copy of str1 - '%s' into copy - '%s'\n\n", str, copy);
}

void catFunction(char str[])
{
    char cat[40] = "Namaste ";
    int length = strlen(cat);

    int i = 0;
    while (str[i] != '\0')
    {
        cat[length + i] = str[i];
        i++;
    }
    cat[length + i] = '\0';

    printf("Logic -- cat of str - '%s' into cat - '%s'\n\n", str, cat);
}

void reverseFunction(char str[])
{
    int low = 0;
    int high = strlen(str) - 1;
    printf("Logic - Reverse of '%s' is ", str);

    while (low < high)
    {
        char temp = str[high];
        str[high] = str[low];
        str[low] = temp;

        low++;
        high--;
    }

    printf("'%s'\n\n", str);
}

void compareFunction(char s1[], char s2[])
{
    int i = 0;
    if ((strlen(s1) - strlen(s2)) == 0)
    {
        printf("%s == %s => ", s1, s2);
        while (s1[i] != '\0')
        {
            if ((s1[i] - s2[i]) > 0)
            {
                printf("Left Side is Bigger");
                return;
            }
            else if (s1[i] - s2[i] < 0)
            {
                printf("Right Side is Bigger");
                return;
            }
            i++;
        }
        printf("Equal");
    }
    else
    {
        printf("'%s' != '%s' as length are not same\n\n", s1, s2);
    }
}

int main()
{
    char str1[40] = "Hello World";
    char str2[40] = "Hello World";
    char str3[40] = "Hello World";

    // printf("Enter String : ");
    // scanf(" %s", str);

    // * 1. length of string
    printf("Inbuilt -- Length of '%s' is %d\n", str1, strlen(str1));
    lengthFunction(str1);

    // * 2. uppercase
    printf("Inbuilt -- UpperCase of '%s' is ", str1);
    strupr(str1);
    printf("is '%s'\n", str1);
    uppercaseFunction(str2);

    // * 3. Lowercase
    printf("Inbuilt -- Lowercase of '%s' is ", str1);
    strlwr(str1);
    printf("is '%s'\n", str1);
    lowercaseFunction(str2);

    // * copy
    char copy[40];
    strcpy(copy, str1);
    printf("Inbuilt -- Copy of str1 - '%s' into copy - '%s'\n", str1, copy);
    copyFunction(str2);

    // * cat
    char cat[40] = "Namaste ";
    strcat(cat, str1);
    printf("Inbuilt -- cat of str1 - '%s' into cat - '%s'\n", str1, cat);
    catFunction(str2);

    // * rev
    printf("Inbuilt - Reverse of '%s' is ", str1);
    strrev(str1);
    printf("'%s'\n", str1);
    reverseFunction(str2);

    // * compare
    char s1[30] = "Hello";
    char s2[30] = "hell";

    int result = strcmp(s1, s2);
    printf("%s == %s => %s\n", s1, s2, (result == 0 ? "EQUAL" : (result > 0) ? "Left String is Bigger"
                                                                             : "Right String is Bigger"));

    compareFunction(s1, s2);

    return 0;
}