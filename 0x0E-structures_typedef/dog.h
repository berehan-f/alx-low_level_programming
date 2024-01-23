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

/**
 * dog_t - an alias for type struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
