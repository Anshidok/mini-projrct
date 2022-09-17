#include <stdio.h>
#include<stdlib.h>
main()

{

    int i, e= 0;



    for (i = 0; i <= 100; i+2)
    {

       
            cout<<i;
            e=e + i;
        

    }

    cout<<"Sum of all even numbers=" <<e ;
}