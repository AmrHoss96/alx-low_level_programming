#include "main.h"
/**
 * print_line - prints line
 * @n: number of _
 * Retrun: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(n + '_');
		}
		_putchar('\n');
	}
}
