#include <stdio.h>
#include <stdlib.h>
void swap2(int *x , int *y);

int main()
{
    /*
    4-Write a function to  swap two numbers in c without using third variable(2 Methods).
    */

    // the second method
    int v =5, z=6;

        printf (" Before swap \n v = %d \t z = %d \n", v , z);

        swap2 (&v , &z);

        printf("Afer swap \n v = %d \t z = %d \n ", v , z);



    return 0;
}
void swap2(int *x , int *y)
{
    *x = *x+*y; //11(5+6)
    *y = *x-*y; //5(11-6)
    *x = *x-*y; //6 (11-5)

}
