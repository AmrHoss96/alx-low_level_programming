#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all parameters
 * @n: number of parameters
 * Return: zero
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;

	unsigned int i;

	unsigned int sum = 0;

	va_start(arguments, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, unsigned int);
	}
	va_end(arguments);
	return (sum);
}
