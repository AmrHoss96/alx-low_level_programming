#include "main.h"
/**
  * print_alphabet_x10 - entry point
  * description -  prints alphabet 10 times
  * return: 0
  */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
