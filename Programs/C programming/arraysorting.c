#include<stdio.h>
#include<stdlib.h>
int main(void){
    int array[100];
    int i,n,j,temp;


    printf("enter limit\n");
    scanf("%d",&n);


    printf("enter the values ");
    for(i=0;i<n;i++){
       scanf("%d",&array[i]);
    }


    for(i=0;i<n-1;i++){

        for(j=i+1;j<n;j++)
        {
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("sorted array =");
    for(i=0;i<n;i++){
        printf("%d\t",array[i]);
    
    }
}