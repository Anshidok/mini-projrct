#include <stdio.h>
#include<stdlib.h>
 void main()

{

    int i, evensum = 0;



    for (i = 0; i <= 100; i++)
    {

     i=i+2;
       
            printf("%d\t",i);
            evensum =evensum + i;
        

    }

    printf("Sum of all even numbers = %d\n",evensum);
}