#include<stdio.h>
#include<stdlib.h>
int main(void){
    int aray[100],i,limit,sum=0;

    printf("enter the limit\n");
    scanf("%d",&limit);

    printf("enter the values\n");


    for(i=0;i<limit;i++)
    {
        scanf("%d",&aray[i]);
    }


    for(i=limit-1;i>=0;--i)
    {
         printf("%d\t",aray[i]);
    }
}