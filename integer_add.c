#include <stdio.h>
#include <stdlib.h>

/**
 * integer_add - A function that adds two integers
 *
 * Return: 0;
 */

int integer_add(int a, int b)
{
	int sum;
	sum = a + b;
	return (sum);
}

/**
 * main - a function that outputs the results
 *
 * Return )
 */
int main(void)
{
	int sum;

	sum = integer_add(20, 12);

	printf("The sum is %d.\n", sum);
	return(0);
}
