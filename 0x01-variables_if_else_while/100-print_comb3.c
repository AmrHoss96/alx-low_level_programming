#include <stdio.h>
/**
  * main - Entry point
  * 
  * Return: 0 Always (Sucess)
  */
int main(void)
{

	int i,j,k;

	i = 0;

	while (i < 100)
	{

	 k = i / 10; /* first number */
	
	 j = i % 10; /* second number */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');
		
		if (i < 89)
		{
			putchar(',');
			putchar(' ');
		}
	}

			i++;
	}
	putchar('\n');
	return (0);
}
