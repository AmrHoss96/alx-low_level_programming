#include "main.h"
/**
 * _pow_recursion - prints x to power of y
 * @x: orignial number
 * @y: power to x
 * Return: -1 if y = 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
