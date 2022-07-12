#include "dog.h"

/**
 * new_dog - entry
 * @name: name
 * @age: age
 * @owner: owner
 * Return: aa
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *dog1;
	char *copyname;
	char *copyowner;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return(NULL);
	copyname = malloc(sizeof(name));
	copyowner = malloc (sizeof(owner));
	if (copyname == NULL)
	{
		free(copyname);
		free(dog1);
		return(NULL);
	}
	if (copyowner == NULL)
	{
		free(copyname);
		free(copyowner);
		free(dog1);
		return(NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		copyname[i] = name[i];
	copyname[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
		copyowner[j] = owner[j];
	copyowner[j] = '\0';
	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;
	return dog1;
}
