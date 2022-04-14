#include "main.h"
/**
 * print_diagsums - the sum of two diagonals of a square
 * @a: 2d array of chars
 * @size: number matrix
 * return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	i = 0;
	while (i < size)
	{
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - i - 1);
		i++;
	}
	printf("%i, %i\n", sum1, sum2)
}
