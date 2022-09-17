#include<iostream>
#include<stdlib.h>
using namespace std;

template <class T> class StackADT
{
int max,top;
T stack[10];
public:
StackADT();
int isFull();
int isEmpty();
void push(T data);
T pop();
void showStack();
};


template <class T> StackADT <T> :: StackADT()
{
max=5;
top=0;
}

template <class T> int StackADT <T> :: isFull()
{
if (top==max)
return 1;
else
return 0;
}


template <class T> int StackADT <T> :: isEmpty()
{
if (top==0)
return 1;
else
return 0;
}


template <class T> void StackADT <T> :: push(T data)
{
if(isFull())
{
cout << ".......Stack FULL...!!! MSG from push(T data)";
return;
}
else
{
top=top+1;
stack[top]=data;
}
}


template <class T> T StackADT <T> :: pop()
{
T pdata=-1;
if(isEmpty())
{
cout << ".......Stack EMPTY...!!! MSG from pop()";
}
else
{
pdata=stack[top];
top=top-1;
}
return(pdata);
}


template <class T> void StackADT <T> :: showStack()
{
if(isEmpty())
{
cout << ".......Stack EMPTY...!!! MSG from showStack()";
}
else
{
cout << "........STACK........ ";
for (int i=top; i>0; --i) cout << stack[i] << " ";
}
}


int main()
{
int ch;
StackADT <int> st;
int t;
int x;
do
{
cout <<"\n1.Push \n2.Pop \n3.Display \n4.Exit \nEnter Choice ? ";
cin >> ch;
switch(ch)
{
case 1:
cout <<".......Enter Data ? ";
cin >> x;
st.push(x);
break;
case 2:
t=st.pop();
if (t!=-1)
{
cout << ".......POPPED Data = " << t;
}
break;
case 3:
st.showStack();
break;
case 4:
exit(0);
}
} while (ch!=4);
return (0);
}


