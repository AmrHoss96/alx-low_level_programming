#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals
 * @a: pointer to and int
 * @size: size of any square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;

	int j;

	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + j];
		j++;
	}
	i = 0;
	for (j = size - 1; i < size; j--)
	{
		sum2 += a[i * size + j];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
