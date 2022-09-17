#include <stdio.h>
#include<stdlib.h>
#include<string.h>


int stack[100];
int maxsize =100;
int top=0,i;

int main()
{
    char str[100];
    void push(char);
    int pop();
    int empty();
    
    printf("enter the string\n");
    scanf("%s",str);
    //int len = strlen(str);
   for ( i = 0; str[i]!='\0'; i++)
   {
     push(str[i]);
   }
   while(!empty())//for ( i = 0; str[i]!='\0';i++)
   {
     printf("%c\n",pop());
   } 
}

void push(char b)
{ 
  stack[++top]=b;
}
int pop()
{
  return stack[top--];
}
int empty()
{
   if (top==0) return 1;
   else return 0;
}
    