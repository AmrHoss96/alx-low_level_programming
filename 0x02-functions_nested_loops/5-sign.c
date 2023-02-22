#include "main.h"
/**
 * main - entry point
 * print_sign(int n) - prints sign of numbers
 *
 * return: 0
 * return main: 0
 */
int main(void)
{
	print_sign(int n);
	return (0);
}
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
