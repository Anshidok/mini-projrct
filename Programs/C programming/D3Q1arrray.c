#include<stdio.h>
#include<stdlib.h>
int main(void){ 
    int array[100],i,limit,sum = 0;
    float avg;
    printf("enter limit\n");
    scanf("%d",&limit);


    printf("enter the values\n");
    for(i=0;i<limit;i++)
    {
       scanf("%d",&array[i]);
       sum = sum + array[i];
    }
    avg = sum/limit;
    printf("array = \n");
    for(i=0;i<limit;i++)
    {
       printf("%d\t",array[i]);
    
    }
    printf("\nsum = %d\n",sum);
    printf("average= %f\n",avg);
    printf("First element = %d\n",array[0]);
    printf("Last element = %d\n",array[limit-1]);
}