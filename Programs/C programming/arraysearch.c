#include<stdio.h>
#include<stdlib.h>
int main(void){
    int array[100],searchkey,i,limit,flage=0;
    printf("enter limit");
    scanf("%d",&limit);
    printf("enter the values");

    for ( i = 0; i < limit; i++){
        scanf("%d",&array[i]);
    }
    
    printf("enter search key");
    scanf("%d",&searchkey);
    
    for ( i = 0; i < limit; i++)
    {
    if (searchkey==array[i]){
        flage=1;
        break;
    }
    }
    if (flage=1)
    {
        printf("searchkey is found at positoin %d",i+1);
    }
    else{
        printf("invalid slection");
    }
    
}