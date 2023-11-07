#include "dog.h"
/**
 * init_dog - function to initialize struct dog
 * @d: pointer to the dog to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dogs ownwer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d != NULL)
	{
		d->name =name;
		d->age = age;
		d->owner = owner;
	}
}
