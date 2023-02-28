#include "main.h"
/**
 * rev_string - function that takes the array values and reassign them
 * @s: array of characters
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	char j;

	int x;

	int c;

	for (i = 0; s[i] != '\0'; i++)
		;
	x = i;
	for (i--, c = 0; c < (x / 2); i--, c++)
	{
		j = s[c];
		s[c] = s[i];
		s[i] = j;
	}
}
