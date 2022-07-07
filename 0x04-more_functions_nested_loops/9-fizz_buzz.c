#include "main.h"
#include <stdio.h>
/**
 * main - print a fizz buss program
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
			printf("Fizzbuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%d", x);
		if (x < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
