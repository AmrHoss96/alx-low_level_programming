#include "main.h"
/**
 * get_endianness - checks if big endian or little
 * Return: 0 for big , 1 for little
*/
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char*) &x;
	return (int)*c;
}