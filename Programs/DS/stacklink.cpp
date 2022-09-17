#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node *link;
	
};
class stack{
 Node *top = NULL;


public:


int isempty()
{
	if(top == NULL)
	return 1;
	 else
	return 0;
}

void push (int value)
{
	Node *ptr = new Node();
		ptr->data = value;
		ptr->link = top;
		top = ptr;
	
}

void pop ( )
{
	if ( isempty() )
	cout<<"Stack is Empty";
	else
	{
		Node *ptr = top;
		top = top -> link;
		delete(ptr);
	}
}


void displayStack()
{
	if ( isempty() )
	cout<<"Stack is Empty";
	else
	{
		Node *temp=top;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->link;
		}
	cout<<"\n";
	}
}
};
int main()
{
	int ch,  value;
	stack s;
	do
	{
		cout<<"\n1.Push \n2.Pop \n3.displayStack \n4.exit\n\n\nenter choice\n";
		cin>>ch;
		switch (ch)
		{
			case 1: cout<<"Enter Value:\n";
			cin>>value;
			s.push(value);
			break;
			case 2: s.pop();
			break;
			case 3: s.displayStack();
			break;
			
			case 4: exit(0) ;
			break;
		}
	
		
	}while(ch!=4);
	return 0;
}





