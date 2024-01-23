#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - get string length including terminating null byte.
 * @s: the string whose length to compute.
 * Return: string length.
 */

int _strlen(char *s)
{
	int i;
	for (i = 0; s[i]; i++)
		;
	return (i + 1);
}
/**
 * _strcpy - copies the string pointed to by src including the terminating
 *           null byte to the buffer pointed to by dest.
 * @src: the source of the string to copy from
 * @dest: desstination buffer to which we copy our string.
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
		i++;
	while (i >= 0)
	{
		dest[i] = src[i];
		i--;
	}
	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * Return: new_dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == 0)
		return (0);

	dog->name = malloc(sizeof(char) * _strlen(name));
	if (dog->name == 0)
	{
		free(dog);
		return (0);
	}

	dog->owner = malloc(sizeof(char) * _strlen(owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
