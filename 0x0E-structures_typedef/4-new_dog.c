#include "dog.h"
#include <stdlib.h>
/**
* new_dog - creates a new struct of type dog
* @name: struct parameter name
* @age: struct parameter age
* @owner: struct parameter owner
* Return: returns pointer to buffer of datatype dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *thedog;

	nlen = olen = 0;
	while (name[nlen++])
		;
	while (owner[olen++])
		;
	thedog = malloc(sizeof(dog_t));
	if (thedog == NULL)
		return (NULL);

	thedog->name = malloc(nlen * sizeof(thedog->name));
	if (thedog == NULL)
		return (NULL);
	for (i = 0; i < nlen; i++)
		thedog->name[i] = name[i];

	thedog->age = age;

	thedog->owner = malloc(olen * sizeof(thedog->owner));
	if (thedog == NULL)
		return (NULL);
	for (i = 0; i < olen; i++)
		thedog->owner[i] = owner[i];
	return (thedog);
}
