#include "main.h"
/**
 * _isdigit - checks for digit
 * @c - digit
 * return: 1 if digit 0 if anyelse
 */
int _isdigit(int c)
{
	if (c < 9 && c > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
