#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
    4- You are given a string s. You need to reverse the string.
   Input: char s [] = Geeks
   Output: skeeG
   */

   char sarr[40];

   int len;

   printf("\n Enter the string : ");
   scanf("%s" , sarr);
   len = strlen(sarr);

    // easy way using function
   // printf("\n Enter the reverse string is : %s" ,strrev(sarr));


  /////////////////////////////////////////////////////////////////

   printf("\n Enter the reverse string is : " );
   for(int i =len ; i>=0 ; i--)
   {
       printf("%c" , sarr[i]);
   }

///////////////////////////////////////////////////////////
//third way


/*
    char acData[100]= {0}, Temp = 0;
    int iLoop =0, iLen = 0;
    printf("\nEnter the string :");
    gets(acData);
    // calculate length of string
    while(acData[iLen++] != '\0');
    //Remove the null character
    iLen--;
    //Array index start from 0 to (length -1)
    iLen--;
    while (iLoop < iLen)
    {
        Temp = acData[iLoop];
        acData[iLoop] = acData[iLen];
        acData[iLen] = Temp;
        iLoop++;
        iLen--;
    }
    printf("\n\nReverse string is : %s\n\n",acData);
    */

    return 0;
}
