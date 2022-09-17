#include <stdio.h>
#include<stdlib.h>


int stack[100];
int maxsize =100;
int top=0;



int main()
{
    int n;
    void push(int);
     int pop();
     int empty();
    

    printf("enter the number\n");
    scanf("%d",&n);

    while(n!=0)
    {
        
        push(n%2);
        n=n/2;
    }
    printf("Binary = ");

    while(!empty())
    {
       printf("%d",pop());
    }
}
void push(int b)
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
    
    