# Name of project: 0x0E. C - Structures, typedef
## Learning objectives:
	- understand structures. know when, why and how to use them.
	- understand how to use typedef.
### Task 0: dog.h
	- Define a new type struct dog with the following elements:
	name, type = char *
	age, type = float
	owner, type = char *
### Task 1: 1-init\_dog.c
	- Write a function that initialize a variable of type struct dog
	- Prototype: void init\_dog(struct dog *d, char *name, float age, char *owner);
### Task 2: 2-print\_dog.c
	- Write a function that prints a struct dog
	- Prototype: void print_dog(struct dog *d);
	- You are allowed to use the standard library
	- If an element of d is NULL, print (nil) instead of this element.
          (if name is NULL, print Name: (nil))
	- If d is NULL print nothing.
### Task 3: dog.h
	- Define a new type dog\_t as a new name for the type struct dog.
### Task 4: 4-new\_dog.c
	- Write a function that creates a new dog.
	- Prototype: dog\_t *new_dog(char *name, float age, char *owner);
	- You have to store a copy of name and owner
	- Return NULL if the function fails.
### Task 5: 5-free\_dog.c
	- Write a function that frees dogs.
	- Prototype: void free_dog(dog_t *d);
