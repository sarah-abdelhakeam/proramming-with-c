#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Write a C program in C to find the count of the longest consecutive occurrence of a given number in an array. Example:
   Array={1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 , result = 4

   */

    int size , num , flag  , max_len ;
    int arr[1000];

    printf("Enter the array size \n");
    scanf("%d" , &size);

    printf("Enter %d elements :", size);

//set he values

    for(int i =0 ;i<size ; i++)
    {
       scanf("%d",&arr[i]);

    }//end foei

//print the array
    printf("\n Array = \n");

    for(int i=0 ; i<size ; i++)
    {
        printf("%d  " , arr[i]);
    }


    printf("\n what number you want searching for : \n" );
    scanf("%d" , &num);

     flag = 0;
     max_len=1;

    for(int i =0 ; i<size ; i++)
    {
        if (arr[i]==num)
        {
            flag ++ ;

                if( arr[i]==arr[i+1] )
                {
                    continue;
                }
                else if (arr[i] + 1 == arr[i + 1])
                {
                    max_len++;
                }
                else
                {
                    max_len=1;
                }


        }
    }
//the  no of all occoccurrence
// i should try to return the index (i) of the first occurrence

// return from index ? to ?? & index ....
   printf("\n no of occoccurrence : %d" , flag);
   printf("\n max length : %d" , max_len);


    return 0;
}
