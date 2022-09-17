#include<iostream>
#include<stdlib.h>
using namespace std;


template <class T> class Stack
{
int max,top;
T stack[100];
public:
Stack();
int isFull();
int isEmpty();
void push(T data);
T pop();
};

template <class T> Stack <T> :: Stack()
{
max=99;
top=0;
}

template <class T> int Stack <T> :: isFull()
{
if (top==max)
return 1;
else
return 0;
}

template <class T> int Stack <T> :: isEmpty()
{
if (top==0) return 1;
else
return 0;
}

template <class T> void Stack <T> :: push(T data)
{
top=top+1;
stack[top]=data;
}

template <class T> T Stack <T> :: pop()
{
T pdata;
pdata=stack[top];
top=top-1;
return(pdata);
}

int main()
{
int n, number;
Stack <int> st;
cout << "Enter the Decimal Number ? ";
cin >> n;

int rdigit;
while (n!=0)
{
rdigit=n%2;
st.push(rdigit);
n=n/2;
}

cout << "Binary Equivalent ";
while ( !st.isEmpty( ) )
{
cout << st.pop( ) << " ";
}
cout << endl;
}


