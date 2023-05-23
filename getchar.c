#include<stdio.h>
#include<stdlib.h>

/**
 * main - A function using getchar to read characters
 *
 */

int main ()
{
	int ch1;
	int ch2;

	printf("Please type in two charcaters of your choice: \n");
	ch1 = getc (stdin);
	ch2 = getchar( );

	printf("The first character is %c\n", ch1);
	printf("The second character is %c\n", ch2);
	return (0);
}
