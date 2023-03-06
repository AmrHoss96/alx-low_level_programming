#include "main.h"
/**
 * _strchr - searches for a character in a string
 * @s: pointer to a string of characters
 * @c: character to be searched for in s
 * Return: c ( if successful), Null ( if failed)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if(s[i] == c)
		{
			return (s + i);
		}
		else
		{
			i++;
		}
	}
	return (s + i);
}
