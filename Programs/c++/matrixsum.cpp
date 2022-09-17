#include <iostream>
using namespace std;
main()
{
    int i,j,m,n,a[10][10],x,y,b[10][10],c[30][30];

    //read a mtrix 1
    
    cout<<"enter the order of matrix 1"<<endl;
    cin>>m >>n;


    cout<<"enter the values of matrix 1"<<endl;
    for ( i = 0; i < m; i++)
    {
     for ( j = 0; j < n; j++)
     {
        cin>>a[i][j];
     }
     
    }
    
    //read matrix 2
    cout<<"enter the order of matrix 2"<<endl;
    cin>>x >>y;


    cout<<"enter the values of matrix 2"<<endl;
    for ( i = 0; i < x; i++)
    {
     for ( j = 0; j < y; j++)
     {
        cin>>b[i][j];
     }
     
    }
    
    //print matrix 1

    cout<<"given matrix 1= "<<endl;
    for ( i = 0; i < m; i++)
    {
     for ( j = 0; j < n; j++)
     {
        cout<<a[i][j]<<" ";
     }
      cout<<endl;
    }

    //print matrix 2

    cout<<"given matrix 2= "<<endl;
    for ( i = 0; i < x; i++)
    {
     for ( j = 0; j < y; j++)
     {
        cout<<b[i][j]<<" ";
     }
      cout<<endl;
    }


    //adition
    for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < n; j++)
       {
          c[i][j] = a[i][j] + b[i][j];
       }
       
    }
    
    cout<<"result = "<<endl;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
       {
             cout<<c[i][j]<<" ";
       }
      cout<<endl;
    }










}
