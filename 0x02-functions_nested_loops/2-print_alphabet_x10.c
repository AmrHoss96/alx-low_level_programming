#include "main.h"
/**
  * main - entry point
  * code that prints alphabet 10 times
  * return: 0 ( main)
  */
int main(void)
{
	void print_alphabet_x10(void);
	{
		int i;

		for (i = 0; i <= 10; i++)
		{
			char j = 'a';

			while (j <= "z")
			{
				_putchar(j);
				j++;
			}
		}
	}
		_putchar('\n');
		return (0);
}
