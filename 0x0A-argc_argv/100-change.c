#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 if error else return 0
*/
int main(int argc, char *argv[])
{       
        int change, num;

        change = 0;
        if (argc == 2)
        {
                num = atoi(argv[1]);
                if (num > 0)
                {
                        for (; num > 25; change ++)
                                num -= 25;
                        for (; num > 10; change ++)
                                num -= 10;
                        for (; num > 5; change ++)
                                num -= 5;
                        for (; num > 2; change ++)
                                num -= 2;
                        for (; num > 1; change ++)
                                num -= 1;       
                }
        printf("%d\n", change);
        return (0);
        }
        else
        {
                printf("Error\n");
                return (1);
        }
}
