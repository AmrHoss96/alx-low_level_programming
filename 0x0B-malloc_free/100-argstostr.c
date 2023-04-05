#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * argstostr - function that oncatenates all the arguments of my program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to string or null if failed
*/
char *argstostr(int ac, char **av)
{
	int i, j, x;
	int size;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	size = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	x = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arg[x] = av[i][j];
			j++;
			x++;
		}
		arg[x] = '\n';
		x++;
		i++;
	}
	arg[x] = '\0';
	return (arg);
}
