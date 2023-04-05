#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 if success
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
		if (i == (count - 1))
		{
			printf("#2hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
