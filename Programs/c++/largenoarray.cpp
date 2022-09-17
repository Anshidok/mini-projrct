#include<iostream>
using namespace std;
int main()
{
    int array[50];
    int i,j,temp,limit;

    cout<<"enter the limit"<<endl;
    cin>>limit;
    cout<<"enter the values for array"<<endl;
    for ( i = 0; i <limit; i++)
    {
        cin>>array[i];
    }

    for (i=0;i<limit-1;i++){
            for(j=i+1;j<limit;j++){       
                 if (array[i]>array[j]){
                     temp=array[i];
                     array[i]=array[j];
                     array[j]=temp;
            }
        }
    }
     for ( i = 0; i <limit; i++){
         cout<<array[i]<<" ";
     }
    cout<<endl;
    cout<<"Laergest element in array = "<<array[limit-1]<<endl;;
    cout<<"second Laergest element in array = "<<array[limit-2]<<endl;;
}