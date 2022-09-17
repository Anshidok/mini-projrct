#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int array1[100],array2[100];
    int i,temp,limit;

    
    printf("enter then limit\n");
    scanf("%d",&limit);


    printf("enter the values for array1\n");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&array1[i]);
    
    }

    printf("enter the values for array2\n");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&array2[i]);
    }



    for ( i = 0; i < limit; i++)
    {
        
         temp=array1[i];
         array1[i]=array2[i];
         array2[i]=temp;
        
        
    }
    printf("sorted array is below\n");  
    printf("array 1 = \n");
    for ( i = 0; i < limit; i++)
    {
        printf("%d\t",array1[i]);
    }
    printf("\narray 2 = \n");
    for( i = 0; i < limit; i++)
    {
        printf("%d\t",array2[i]);
    }
    
    
}