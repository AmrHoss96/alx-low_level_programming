#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function takes first occurence
 * @s: string to be scanned
 * @accept: string to search with
 * Return: accept if successful
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	
	int j = 0;

	while(s[i] != '\0')
	{
		while(accept[j] != '\0')
		{
			if(s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return NULL;
}
