#include "main.h"
/**
 * print_line - prints line
 * @n: number of _
 * Retrun: void
 */
void print_line(int n)
{
	int i;
	
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
		_putchar('\n');
}
