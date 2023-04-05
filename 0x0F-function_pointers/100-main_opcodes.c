#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: arrayay of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count, i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	count = atoi(argv[1]);

	if (count < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (i = 0; i < count; i++)
	{
		if (i == count - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
