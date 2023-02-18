#include <stdio.h>
/**
  * main - main block
  * description - program that prints all possible different comb of two digits
  * Return: 0 Always (Sucess)
  */
int main(void)
{
	int a;

	int b;

	while (a < 10 && b < 10)
	{
	if (a < 10)
	{
	putchar(a + '0');
	}
	if (b < 10)
	{
	putchar(b + '0');
	}
	putchar(44);
	putchar(32);
	b++;
	}
	return (0);
}

