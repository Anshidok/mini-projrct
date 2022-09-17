#include <iostream.>
using namespace std;
main()
{
    int i,j,m,n,a[10][10];

    cout<<"enter the order of matrix"<<endl;
    cin>>m >>n;


    cout<<"enter the values"<<endl;
    for ( i = 0; i < m; i++)
    {
     for ( j = 0; j < n; j++)
     {
        cin>>a[i][j];
     }
     
    }
    

cout<<"given matrix= "<<endl;
    for ( i = 0; i < m; i++)
    {
     for ( j = 0; j < n; j++)
     {
        cout<<a[i][j]<<" ";
     }
      cout<<endl;
    }

}
