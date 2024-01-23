#ifndef DOG_H
#define DOG_H
/**
 * struct dog - describes a dog.
 * @name: pet name
 * @age: pet age
 * @owner: owner name
 *
 * Description: describes attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
