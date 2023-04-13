#include <stdio.h>
#include <stdlib.h>

int main()
{


//11- Receive numbers from the user, and exit when the sum exceeds 100.
        int number=0;
        int counter=0;

      do {
            printf("Enter a number: \n");
            scanf("%d" , & number);
            counter+= number;

      } while(counter < 100);



    return 0;
}
