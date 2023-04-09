#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to a string of 0 or 1 chars
 * Return: converted no. or 0 if b in Null or has not 0 nor 1
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, i;
	char one, zero;

	one = '1';
	zero = '0';
	result = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != one && b[i] != zero)
			return (0);
		result = result * 2 + (b[i] - zero);
	}
	return (result);
}
