#include<stdio.h>
#include<stdlib.h>
int main(void){
    int aray[100],i,limite,sum=0;
    printf("enter the limit\n");
    scanf("%d",&limite);
    printf("enter the values\n");
    for(i=0;i<limite;i++)
    {
        scanf("%d",&aray[i]);
        sum=sum+aray[i];
    }
    for(i=0;i<limite;i++)
    {
         printf("%d\t",aray[i]);
    }
    printf("sum=%d\n",sum);
    printf("program ended\n");

}