#include "main.h"
#include <string.h>
/**
 * _strlen - prints the length of a string
 * @s: array of characters
 * Return: 0
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++);
	
	return (len);
}
