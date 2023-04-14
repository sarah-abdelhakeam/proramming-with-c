#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3- Write a program in C to find the second largest element in an array
    int size , max , second_largest;
    int arr[1000];

    printf("Enter the array size \n");
    scanf("%d" , &size);

    printf("Enter %d elements :\n", size);

    for(int i =0 ;i<size ; i++)
    {
       scanf("%d",&arr[i]);

    }//end for

    printf("\n the array : \n");
     for(int i=0 ; i<size ; i++)
    {
        printf("%d  " , arr[i]);
    }


   for(int i=0 ; i<size ; i++)
   {
       if ( arr[i] >= max )
         max = arr[i];

   }

   for(int i=0 ; i<size ; i++)
   {
       if ( arr[i] < max )
         second_largest = arr[i];

   }
    printf("\n the largest element is :  %d " , max);
    printf("\n the second largest element is :  %d " , second_largest);



    return 0;
}
