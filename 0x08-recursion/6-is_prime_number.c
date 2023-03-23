#include "main.h"

/**
 * is_prime_helper - says if an integer is a prime number or not
 * @n: number to evaluate
 * @factor: helper
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_helper(int n, int factor)
{
	if (n < 2)
	{
	/* Negative numbers, 0, and 1 are not prime */
	return (0);
	}
	if (n == 2)
	{
	/* 2 is the only even prime number */
	return (1);
	}
	if (n % 2 == 0)
	{
	/* Even numbers (except 2) are not prime */
	return (0);
	}
	if (factor * factor > n)
	{
	/* n is not divisible by any factor up to its square root, so it's prime */
	return (1);
	}
	if (n % factor == 0)
	{
	/* n is divisible by factor, so it's not prime */
	return (0);
	}
	/* Check the next odd factor */
	return (is_prime_helper(n, factor + 2));
}

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 3));
}

