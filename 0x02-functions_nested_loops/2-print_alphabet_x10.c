#include "main.h"
/**
  * print_alphabet_x10 - entry point
  * description -  prints alphabet 10 times
  * return: 0
  */
void print_alphabet_x10(void)
{
		int i;

		for (i = 0; i <= 10; i++)
		{
			char j = 'a';

			while (j <= 'z')
			{
				_putchar(j);
				j++;
			}
			_putchar('\n');
		}
}
