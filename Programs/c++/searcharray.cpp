#include <iostream>
using namespace std;
main()
{
    int a[100],i,search,limit,flage=0;
    cout<<"enter the limit"<<endl;
    cin>>limit;

    cout<<"enter the elements into array"<<endl;
    for ( i = 0; i < limit; i++)
    {
        cin>>a[i];
    }

    cout<<"enter the search element"<<endl;
    cin>>search;
    for ( i = 0; i <limit; i++){
        if(search==a[i])
        {
            flage=1;
            break;
        }
    }
    if (flage=1)
    {
        cout<<"saerch element fount in position ="<<search<<endl;
    }
    else
    {
        cout<<"invalide selection"<<endl;
    }

















}