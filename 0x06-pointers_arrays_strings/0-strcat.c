#include "main.h"
/**
*char *_strcat - function that concatenate a two strings
*@_strcat - pointer to a string
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i;

	int j;

	for (i = 0; i < dest[i] != '\0'; i++)
		;
	for (j = 0; j < src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return dest;
}
