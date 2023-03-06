#include "main.h"
/**
 * _strspn - funtion return int when finding first char from accept
 * @s: string to be scanned
 * @accept: string contains list of chars to be scanned
 * Return: value of s when findind first char in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length += 1;
			}
		}
	}
	return (length);
}
