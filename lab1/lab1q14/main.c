#include <stdio.h>
#include <stdlib.h>

#include<windows.h>

COORD coord={0,0};
void gotoxy(int x,int y)
{
  	coord.X=x;
 	coord.Y=y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{


//////////////////////////////////////////////
// q 14: magic box

    int row , col , value , size ;

    printf("\n Enter the size : ");
    scanf("%d" , &size);

    if( size%2 != 0 )
    {
        row = 1;
        col = (size +1)/2;
        value = 1;

        do
        {
                gotoxy(col*5,row);
                printf("%5d" , value);

                if(value%size ==0)
                {
                    row++;
                }

            else{
                row--;
                col--;
            }

            if(row==0) row=size;
            if(col==0) col=size;
            value++;

        }//end do

        while(value<=size*size);

    }//end if
    else

      printf(" The size must be odd  number :( ");



    return 0;
}
