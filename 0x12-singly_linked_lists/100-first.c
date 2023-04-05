#include <stdio.h>
void first(void)__attribute__ ((constructor));

/**
 * first - prints from main
 *
*/
void first(void)
{
	printf("Your're beat! and yet, you must allow,\n");
	printf("I bore my house upon my bach!\n");
}
