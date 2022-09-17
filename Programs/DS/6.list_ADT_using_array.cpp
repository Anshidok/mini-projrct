#include<iostream>
using namespace std;
void create();
void insert();
void deletion();
void search();
void display();
int a,b[20],n,d,e,f,i;
int main()
{
	int c;
	cout<<"\n Main Menu";
	cout<<"\n 1.Create \n 2.Delete \n 3.Search \n 4.insert \n5.Display \n";
	do
	{
		cout<<"\n enter your choice:";
		cin>>c;
		switch(c)
		{
			case 1: create(); break;
			case 2: deletion(); break;
			case 3: search(); break;
			case 4: insert(); break;
			case 5: display(); break;
			default:
			cout<<"The given number is not between 1-5\n";
		}
	}
	while(c<=6);
}
void create()
{
	cout<<"\n Enter the number of elements you want tocreate: ";
	cin>>n;
	cout<<"\nenter the elements\n";
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
}
void deletion()
{
	cout<<"Enter the number u want to delete \n";
	cin>>d;
	for(i=0;i<n;i++)
	{
		if(b[i]==d)
		{
			b[i]=0;
			cout<<d<<" deleted";
		}
	}
}
void search()
{
	cout<<"Enter the number \n";
	cin>>e;
	for(i=0;i<n;i++)
	{
		if(b[i]==e)
		{
			cout<<"Value found the position\n"<<i+1;
		} 
	}
}
void insert()
{
	cout<<"\nenter how many number u want to insert: ";
	cin>>f;
	cout<<"\nEnter the elements\n";
	for(i=0;i<f;i++)
	{
		cin>>b[n++];
	}
}
void display()
{
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<b[i];
	}
}
