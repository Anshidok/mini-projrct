#include<stdio.h>
#include<stdlib.h>
int main(void){
    int array[100],i,limit,x,count = 0;
    printf("enter limit\n");
    scanf("%d",&limit);
    printf("enter the values\n");

    for ( i = 0; i < limit; i++){
        scanf("%d",&array[i]);
    }
    printf("enter the element to know you\n");
    scanf("%d",&x);
    for ( i = 0; i < limit; i++)
    {
        if (array[i]==x)
        {
            count++;
        }
        
    }
    printf("%d occures %d times\n",x,count);
}