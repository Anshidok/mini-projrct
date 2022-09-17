#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main(void){
    char a[100];
    int length;
    printf("enter string\n");
    scanf("%s",a);
    printf("enter the values\n");
    length = strlen(a);
    printf("%d",length);
}