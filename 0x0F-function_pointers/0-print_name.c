#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: string of name
 * @f: pointer to a functio that take char as argument and returns void
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
