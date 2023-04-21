#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    2- Write a function to concatenate two strings without using strcat function.
    */

    char str1[20] , str2[20] , concat[100];
    int i =0 , j =0 ;

    printf("Enter the first string \n");
    scanf("%s", str1);
    printf("Enter the second string \n");
    scanf(" %s", str2);


    while(str1[i] != '\0')
    {
        concat[i] = str1[i];
        i++;

    }
    while(str2[j] !='\0')
    {
        concat[i] = str2[j];
        j++;
        i++;

    }
  concat[i]='\0';
 printf("\n the concated string is : %s \n" , concat);
    return 0;
}

