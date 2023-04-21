#include <stdio.h>
#include <stdlib.h>

int str_length(char arr[20]);
void reverse_string (char arr[20] , int size);

	char str[20], reversed_string[20];
	unsigned short start = 0, end = 0;

int main()
{
    /*
    1- Write a function to reverse a string by passing it to a function without using strrev function.
    */

	printf(" Enter a string: ");
	scanf("%[^\n]", str);

    reverse_string(str , str_length(str));

	return 0;
}

int str_length(char arr[20])
{
    // count the number of characters
	while (str[end] != '\0')
		end++;
}
void reverse_string (char arr[20] , int size)
{
    while (end > 0) {
		reversed_string[start] = arr[end-1];
		end--;
		start++;
	}

	reversed_string[start] = '\0';

	printf("\n The reversed string is: %s \n", reversed_string);
}
