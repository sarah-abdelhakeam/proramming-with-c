#include <stdio.h>
#include <stdlib.h>

int main()
{
    //2- C Program to find the minimum & maximum value of array elements. (Min_Max Array)

    int size , max , min;
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
       if ( arr[i] <= min )
         min = arr[i];

   }
    printf("\n the max element is :  %d " , max);
    printf("\n the min element is :  %d " , min);

    return 0;
}
