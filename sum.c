#include<stdio.h>
#include<stdlib.h>

/**
 * main - A function that adds two integers
 *
 */

int main(void)
{
	int a;
	int b;
	int sum;

	printf("Kindly enter the two integers: ");

	scanf("%d %d", &a, &b);
	printf("You have entered %d and %d.\n", a, b);

	sum = a + b;

	printf("The sum of %d and %d is %d.\n", a, b, sum);
	return(0);
}

