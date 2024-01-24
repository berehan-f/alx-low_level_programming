# Name of project: 0x0F. C - Function pointers
## Learning objectives:
	- know function pointers and how to use them.
	- understand what exacly a function pointer holds.
	- understand what a function pointer point to in virtual memory.
### Task 0: 0-print\_name.c
	- Write a function that prints a name.
	- Prototype: void print\_name(char *name, void (*f)(char *));
### Task 1: 1-array\_iterator.c
	- Write a function that executes a function given as a parameter on each element of an array.
	- Prototype: void array_iterator(int *array, size\_t size, void (*action)(int));
	- where size is the size of the array
	- and action is a pointer to the function you need to use
### Task 2: 2-int\_index.c
	- Write a function that searches for an integer.
	- Prototype: int int_index(int *array, int size, int (*cmp)(int));
	- where size is the number of elements in the array array
	- cmp is a pointer to the function to be used to compare values
	- int_index returns the index of the first element for which the cmp function does not return 0
	- If no element matches, return -1
	- If size <= 0, return -1
### Task 3: 
