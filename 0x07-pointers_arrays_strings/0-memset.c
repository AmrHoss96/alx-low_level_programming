#include "main.h"
/**
 * _memset - funtion that fill n byte of memory pointed to by s with a constant byte b
 * @s: string to be replace
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
