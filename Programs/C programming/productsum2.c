#include<stdio.h>
#include<stdlib.h>
int main(void){
    int fact=1,i=0,n,sum=0;
    printf("Enter a limit\n");
    scanf("%d",&n);
    while(i<n)
    {
        i=i+1;
        fact=fact*i;
        sum=sum+i;
    }
    printf("Product of this number = %d\n",fact);
    printf("sum of this number = %d\n",sum);
}