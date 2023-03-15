#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - dupliactes a string to allocated memory block
 * @str: string
 * Return: str or null if insufficient memory
 */
char *_strdup(char *str)
{
	char *ptr;

	int i;

	for (i = 0; str[i]; i++)
		;
	ptr = malloc(sizeof(str) * (i + 1));
	if (str == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			ptr[i] = str[i];
		}
	}
	return (ptr);
}
