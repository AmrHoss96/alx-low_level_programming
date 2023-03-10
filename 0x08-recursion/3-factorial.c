#include "main.h"
/**
 * factorial - calculates factorial of a number
 * @n: a number
 * Return: -1 if n < 0, otherwise return factorial of number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
