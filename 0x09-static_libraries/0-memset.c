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

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--; /*decrements n to become 0 for loop to break*/
	}
	return (s);

}
