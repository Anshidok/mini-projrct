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
	char postfix[100];
	Stack <int> st;
	char x;
	int val;
	int op1, op2, result;
	cout << "Enter the Postfix Expression ? ";
	cin >> postfix;

	for(int i=0; postfix[i]!='\0'; ++i)
	{
		x=postfix[i];
		if ( isalpha ( x ) )
	{
	cout << "Enter Value of Operand " << x << " ? ";
	cin >> val;
	st.push(val);
	}
	else
	{
		op2=st.pop();
		op1=st.pop();
		switch(x)
		{
			case '+' :
			result=op1+op2;
			st.push(result);
			break;
			case '-' : result=op1-op2;
			st.push(result);
			break;
			case '*' : result=op1*op2;
			st.push(result);
			break;
			case '/' : result=op1/op2;
			st.push(result);
			break;
		}
	}

}
cout << "Result of Postfix Expression Evaluated = " << st.pop() << endl;
}

