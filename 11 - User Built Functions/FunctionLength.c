#include<stdio.h>


int findLength(char name[]){

    int i,len=0;
    for(i=0;name[i]!='\0';i++){
        len++;
    }
    return len;
}

int findIndex(char name[],char c){

    int i,index;
    for(i=0;name[i]!='\0';i++){
        if(name[i]==c){
            index =i;
            break;
        }
    }
    return index;

}

void main()
{

    int l,ind;
    l = findLength("royal");
    printf("\n len = %d",l);

    ind = findIndex("india",'a');
    printf("\n index = %d",ind);
    printf("\n index = %d",findIndex("Ahmedabad",'h'));
   
}