#include <stdio.h>
#include <stdlib.h>

int main()
{
       int n1=25 , n2=30 , n3=10 , largest =0 ;

    //Q8: find the largest no amoung 3 nums
    printf("the three numbers are : %d %d %d \n " , n1 , n2,  n3);

    if( n1>n2 && n1>n3)
    {
        largest = n1;
        printf("the largest number is : %d",largest);

    }//end if
    else if( n2>n1 && n2>n3)
    {
         largest = n2;
         printf("the largest number is : %d",largest);
    }//end if else
    else
    {
        largest = n3;
        printf("the largest number is : %d",largest);
    }//end else




    return 0;
}
