#include<stdio.h>
#include<stdlib.h>
int main(void){
    int array1[100],array2[100];
    int i,j,temp,limit;

    
    printf("enter then limit\n");
    scanf("%d",&limit);\


    printf("enter the values for array1\n");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&array1[i]);
    
    }

    printf("enter the values for array2\n");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&array2[j]);
    }



    for ( i = 0; i < limit; i++)
    {
        for ( j = 0; j < limit; j++)
        {
                temp=array1[i];
                array1[i]=array2[j];
                array2[j]=temp;
            
        }
        
    }
    printf("sorted array is below\n");
    printf("array 1 = \n");
    for ( i = 0; i < limit; i++)
    {
        printf("%d\t",array1[i]);
    }
    printf("\narray 2 = \n");
    for( j = 0; j < limit; j++)
    {
        printf("%d\t",array2[j]);
    }
    
    
}