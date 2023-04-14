#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1- C Program to take an array elements from user, then print them out "using 2 for loops". (Print Array)

    int size;
    int arr[1000];

    printf("Enter the array size \n");
    scanf("%d" , &size);

    printf("Enter %d elements :", size);

    for(int i =0 ;i<size ; i++)
    {
       scanf("%d",&arr[i]);

    }//end foei

    printf("\n the array : \n");

    for(int i=0 ; i<size ; i++)
    {
        printf("%d  " , arr[i]);
    }




    return 0;
}
