#include "main.h"
/**
 * _strstr - finds first occurence fron needle in haystack
 * @haystack: initial string
 * @needle: a string to search with in haystack
 * Return: haystack if successful or null if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
