#include "main.h"
/**
 * *leet - function that changes letters to number
 * @s: pointer to a string
 * Return: s
 */
char *leet(char *s)
{
	int i, j;

	char leet_map[5][2] = {'a', '4', 'e', '3', 'o', '0', 't', '7', 'l', '1'};

	char upper_case[] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == (leet_map[j][0]) || s[i] == (upper_case[j]))
			{
				s[i] = leet_map[j][1];
				break;
			}
		}
	}
	return (s);
}
