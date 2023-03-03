#include "main.h"
/**
* char *_strcat - function that concatenate a two strings
* @dest: pointer to a string
* @src: pointer to a string
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
