#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonal of a square matrix
 * @a: the matrix
 * @size: the size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < (size * size); b++)
	{
		if (b % (size + 1) == 0)
		sum1 += *(a + b);
		if (b % (size - 1) == 0 && b != 0 && b < size * size - 1)
		sum2 += *(a + 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
