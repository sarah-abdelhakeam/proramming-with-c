#include <stdio.h>
#include <stdlib.h>

int main()
{
//10- C Program to Check Whether a Character is an Alphabet or not
    char ch ="";

    printf("Enter acharachter: \n");
    scanf("%c" ,&ch );

    if (isalpha(ch))
        printf("%c is an alphabet.", ch);
    else
        printf("%c is not an alphabet.", ch);



    return 0;
}
