#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: digit
 *
 * Return: 1 if true  or 0 if false anyelse
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
