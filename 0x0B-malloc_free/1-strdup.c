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

	int j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	ptr = malloc(sizeof(*ptr) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			ptr[j] = str[j];
		}
		ptr[j] = '\0';
	}
	return (ptr);
}
