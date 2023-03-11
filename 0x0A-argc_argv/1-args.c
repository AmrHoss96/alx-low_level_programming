#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vevtor
 * Return:0
 */
int main(int argc, char *argv[])
{
	(void)argv[0];

	printf("%d\n", argc - 1);

	return (0);
}
