#include "main.h"
/**
 * print_binary - prints number in binary
 * @n: takes unsigned integer as an argument
*/
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int step;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (temp = n, step = 0; (temp >>= 1) > 0; step++)
		;
	for (; step >= 0; step--)
	{
		if ((n >> step) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
