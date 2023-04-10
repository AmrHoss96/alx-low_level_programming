#include "main.h"
/**
 * flip_bits - set bit at index to 1
 * @n: takes unsigned integer as an argument as first number
 * @m: second number
 * Return: index or -1 when failed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int count = 0;

	while (difference != 0)
	{
		count += difference & 1;
		difference >>= 1;
	}
	return (count);
}
