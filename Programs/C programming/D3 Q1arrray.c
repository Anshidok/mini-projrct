#include<stdio.h>
#include<stdlib.h>
int main(void){ 
    int array[100],i,limit,n;

    printf("enter limit\n");
    scanf("%d",&n);


    printf("enter the values ");
    for(i=0;i<n;i++)
    {
       scanf("%d",&array[i]);
       printf("array = %d",array[i]);
    }

}