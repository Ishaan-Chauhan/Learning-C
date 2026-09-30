#include <stdio.h>

int getlen(char name[])
{
    int i , len=0;
    for(i=0 ; name[i] !='\0' ; i++)
    {
        len++;
    }
    return len;
}

int main()
{
    int ans;
    char x[100] = "amit" , x1[100] = "this is me practicing";
    ans=getlen(x);
    printf("the length is %d\n",ans);
    ans=getlen(x1);
    printf("he length is %d",ans); 

    return 0;
}