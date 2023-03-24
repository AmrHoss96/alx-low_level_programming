#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	unsigned int result;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		result = va_arg(args, unsigned int);
		if (!separator)
			printf("%d", result);
		else if (separator && i == 0)
			printf("%d", result);
		else
			printf("%s%d", separator, result);
	}
	va_end(args);
	putchar('\n');
}
