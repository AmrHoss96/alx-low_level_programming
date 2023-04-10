#include "main.h"
/**
 * set_bit - set bit at index to 1
 * @n: takes unsigned integer as an argument
 * @index: position of the bit
 * Return: index or -1 when failed
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
