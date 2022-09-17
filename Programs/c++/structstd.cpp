#include <iostream>
using namespace std;
struct student
{
    int rollno;
    char name[20];
    float phymark,chemark,siencemark;
};
int main()
{
    student std[100];
    int i,count;
    cout<<"Enter the no.of students"<<endl;
    cin>>count;
    //read details of students
    for ( i = 0; i <count; i++)
    {
        cout<<"Enter the Rollno,Enter the name ,Enter the physics mark,chemistry mark"<<endl;
        cin>>std[i].rollno >>std[i].name >>std[i].phymark >>std[i].chemark;
    
        std[i].siencemark=std[i].phymark+std[i].chemark;
    }
    cout<<endl<<endl<<"details"<<endl<<endl;
    for ( i = 0; i <count; i++)
    {
        
        cout<<"rollno = "<<std[i].rollno <<endl <<"name = "<<std[i].name <<endl 
        <<"physics mark = "<<std[i].phymark <<endl <<"chemistry mark = "<<std[i].chemark<<endl;
        
        cout<<"Sience mark = " <<std[i].siencemark<<endl;
    }
}