#include "main.h"
/**
 * _memset - fill n byte of memory pointed to by s with a constant byte b
 * @s: string to be replace
 * @b: character to be fill in memory
 * @n: number of time that b is filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);

}
