#include "main.h"
/**
 * get_bit - get bit at index
 * @n: takes unsigned integer as an argument
 * @index: position of the bit
 * Return: index or -1 when failed
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return -1;

	return ((n >> index) & 1);
}
