#ifndef DOG_H
#define DOG_H
/**
 * struct dog - description of a dog
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef of struct dog
 */
typedef struct dog dog_t;
#endif
