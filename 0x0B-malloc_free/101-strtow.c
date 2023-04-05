#include "main.h"
#include <stdlib.h>
/**
 * count - counts number of letter
 * @string: string to be counted
 * Return: number of letters
*/
int count(char *string)
{
	int ind, c, letter;

	ind = 0;
	letter = 0;
	for (c = 0; string[c] != '\0'; c++)
	{
		if (string[c] == ' ')
			ind = 0;
		else if (ind == 0)
		{
			ind = 1;
			letter++;
		}
	}
	return (letter);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **map, *temp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count(str);
	if (words == 0)
		return (NULL);

	map = (char **) malloc(sizeof(char *) * (words + 1));
	if (map == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				map[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	map[k] = NULL;

	return (map);
}
