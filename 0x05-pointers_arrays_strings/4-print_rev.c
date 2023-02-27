#include "main.h"
/**
 * print_rev - prints a line of text reversed
 * @s: a string - array ofr characters
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	int j;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = i - 1; s[j] != '\0'; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
