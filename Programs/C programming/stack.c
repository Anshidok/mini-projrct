#include <stdio.h>
#include<stdlib.h>


int stack[100];
int maxsize =5;
int top=0;


void main()

{
  int a;
  void push();
  void pop();
  void display();
  void empty();
  void full();


  
  do
  {
    printf("\n\n1.push\n2.pop\n3.empty\n4.full\n5.display\n6.stop\n");
    printf("\n\nEnter your operation :");
    scanf("%d",&a);
    switch (a)
    {
      case 1:
          push();
          break;
      case 2:
          pop();
          break;
      case 3:
          empty();
          break;
      case 4:
          full();
          break;
      case 5:
          display();
          break;
      case 6:
          exit(0);

      default:printf("\n invalid selection");
      
    }
  }while(a!=6);
}
void push()
{
  int b;
  if (top==maxsize) printf("\nStack is full");
  else 
  {
    printf("\nEnter element to push : ");
    scanf("%d",&b);
    stack[top++]=b; 
  }
}

void pop()
{
  int da;
  if(top==0) printf("\n stack empty");
  else
  {
    da=stack[--top];
    printf("\npopout element is %d",da);
  }
}
void display()
{
   if (top==0)
        printf("STACK IS EMPTY\n");
   else{
      printf("stack elemets");
      for ( int i =top; i>0 ;)
       {    i--;
          printf("\n\n----%d\n\n",stack[i]);

       }
  }
}
void empty()
{
   if (top==0)
        printf("STACK IS EMPTY\n");
   else{
      printf("STACK IS  NOT EMPTY\n");
   }
}
void full()
{
   if (top==maxsize)
        printf("STACK IS FULL\n");
   else{
      printf("STACK IS  NOT FULL\n");
   }
}
