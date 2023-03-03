#include "main.h"
/**
 * *leet - function that changes letters to number
 * @s: pointer to a string
 * Return: s
 */
char *leet(char *s)
{
	int i, j;

	char map[5][2] = {{'a', '4'}, {'e', '3'}, {'o', '0'}, {'t', '7'}, {'l', '1'}};

	char upper_case[] = {'A', 'E', 'O', 'T', 'L', '\0'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == (map[j][0]) || s[i] == (upper_case[j]))
			{
				s[i] = map[j][1];
				break;
			}
		}
	}
	return (s);
}
