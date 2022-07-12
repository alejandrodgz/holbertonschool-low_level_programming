#include "dog.h"

/**
 * print_dog - entry
 * @d: dd
 * Return: aa
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if(d->name == NULL)
		printf("(nil)");
	if(d->age == 0)
		printf("(nil)");
	if(d->owner == NULL)
		printf("(nil)");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
