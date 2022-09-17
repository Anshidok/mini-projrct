#include<stdio.h>
#include<stdlib.h>
int main(void){
    int sum = 0, num, rev=0, remainder ,paln ;
    printf("Enter a nmber\n");
    scanf("%d",&num);
    paln = num;
    
    while (num != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        
        num = num / 10;
        sum =sum + num % 10;
    }

    printf("Revers Number = %d\n",rev);
    printf("Sum Of Digits = %d\n",sum);
    
    if(paln == rev)   
    {
        printf("%d is a palindrome\n",paln);
    }
    else{
        printf("%d is not a palindrome\n",paln);
    }

    
}