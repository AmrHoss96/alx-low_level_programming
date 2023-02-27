#include "main.h"
/**
 * swap_int - function to swap values of two variables
 * @a: integer variable
 * @b: integer variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
