#include "variadic_fucntions.h"
/**
 * print_strings - prints strings
 * @separator: is the string to be printed between the strings
 * @n: is number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *string;

	va_list list;
	
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (!string)
			string = "(nil)";
		if (!separator)
			ptrinf("%s", string);
		else if (separator && i = 0)
			printf("%s", string);
		else
			printf("%s%s", separator, string);
	}
	va_end(list);
	printf("\n");
}
