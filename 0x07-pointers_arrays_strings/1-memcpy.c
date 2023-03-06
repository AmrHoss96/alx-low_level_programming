#include "main.h"
/**
 * _memcpy - copy item from memory to another memory area
 * @dest: string that is filled with src
 * @src: memory are to be copied into dest
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
