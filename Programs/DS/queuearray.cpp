#include<iostream>
#include<stdlib.h>
using namespace std;


template <class T> class QueueADT
{
	int size, front, rear;
	T queue[10];
	public:
	QueueADT(int s);
	int isFull();
	int isEmpty();
	void Insert(T data);
	T Delete();
};


template <class T> QueueADT <T> :: QueueADT(int s)
{
	size=s;
	front=rear=0;
}


template <class T> int QueueADT <T> :: isFull()
{
	if (rear==size)
	return 1;
	else
	return 0;
}


template <class T> int QueueADT <T> :: isEmpty()
{
	if (front==rear)
	return 1;
	else
	return 0;
}

template <class T> void QueueADT <T> :: Insert(T data)
{
if(isFull())
	{
	cout << "Queue FULL..!! MSG from Insert(T data)";
	return;
	}
	else
	{
	rear=rear+1;
	queue[rear]=data;
	}
}


template <class T> T QueueADT <T> :: Delete()
{
	T ddata=-1;
	if(isEmpty())
	{
	cout << "Queue EMPTY..!! MSG from Delete()";
	}
	else
	{
	front=front+1;
	ddata=queue[front];
	}
	return(ddata);
}

int main()
{
	int ch;
	int t;
	int y;
	QueueADT <int> que(5);
	do
	{
	cout <<"\n 1.Insert \n 2.Delete \n 3.Exit \n Enter Choice ? ";
	cin >> ch;
	switch(ch)
	{
	case 1:
	cout <<"Enter Data ? ";
	cin >> y;
	que.Insert(y);
	break;
	case 2:
	t=que.Delete();
	if(t!=-1)
	cout << "Deleted Data = " << t;
	break;
	case 3:
	exit(0);
	}
	} while (ch!=3);
	return (0);

}


