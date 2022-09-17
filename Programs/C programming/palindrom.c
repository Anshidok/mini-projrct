#include<stdio.h>
#include<stdlib.h>
int main(void){
    int rev=0, remainder, num, palin;

    printf("Enter a nmber\n");
    scanf("%d",&num);
    palin = num;
    while (num != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num = num / 10;
        
    }
    if(palin == rev)   
    {
        printf("%d is a palindrome\n",palin);
    }
    else{
        printf("%d is not a palindrome\n",palin);
    }
}