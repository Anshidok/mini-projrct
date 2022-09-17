#include <stdio.h>
#include<stdlib.h>


int stack[100];
int maxsize =100;
int top=0;



int main()
{
    int i;
    char s1[100];
    int push(char);
     int pop();
     int empty();
    

    printf("enter the string\n");
    scanf("%s",s1);

    for (i = 0; stack[i]!='\0'; i++)
    {
      push("%c");
    }

    for ( i = top; i>0;i--)
    {
       printf("%c",pop());
    }
}
 int push(char b)
{ 
  if (top==maxsize)  printf("\nStack is full");
  else stack[++top]=b;
}


int pop()
{
  
  if(top==0) printf("\n stack empty");
  else {
  return stack[top--];
  }
}

int empty()
{
   if (top==0) 
    return 1;
   else 
    return 0;
}