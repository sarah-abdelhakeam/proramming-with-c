#include <stdio.h>
#include <stdlib.h>
void swap1(int *x , int *y);
int main()
{
    /*
    4-Write a function to  swap two numbers in c without using third variable(2 Methods).
    */

    // the first method

        int v =5 ; int z=6;
        printf (" before swap \n v = %d \t z = %d \n", v , z);

        swap1(&v , &z);
        printf("Afer swap \n v = %d \t z = %d \n ", v , z);



    return 0;
}
void swap1(int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}
