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
	int i;
	dog_t *dog1;
	char *copyname;
	char *copyowner;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return(NULL);
	copyname = malloc(sizeof(name) + 1);
	for (i = 0; name[i] != '\0'; i++)
		copyname[i] = name[i];
	if (copyname == NULL)
	{
		free(copyname);
		free(dog1);
		return(NULL);
	}
	copyowner = malloc (sizeof(owner) + 1);
	for (i = 0; owner[i] != '\0'; i++)
		copyowner[i] = owner[i];
	if (copyowner == NULL)
	{
		free(copyname);
		free(copyowner);
		free(dog1);
		return(NULL);
	}
	dog1->name = copyname;
	dog1->age = age;
	dog1->owner = copyowner;
	return dog1;
}
