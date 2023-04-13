#include <stdio.h>
#include <stdlib.h>

int main()
{



    for(int i=0 ; i<=12 ; i++)
    {
             printf("\n ********The multipliacation table of %d **************** \n ",i+1);

        for (int j =0 ; j<=10 ; j++)
        {
          printf("\n %d * %d =  %d", i , j , i*j);
        }

        printf("\n\n ********************************************** \n\n ");
    }//end loop



    return 0;
}
