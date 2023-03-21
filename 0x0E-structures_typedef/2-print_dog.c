#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that pritns dog
 * @d - struct d
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		(d->name == NULL) ? printf("(nil)\n") : printf("Name: %s\n", d->name);
		prinf("Age: %f\n", d->age);
		(d->owner == NULL) ? printf("(nil)\n") : printf("Owner: %s\n", d->owner);
	}
}
