# Name of project: 0x12. C - Singly linked lists
## Learning objectives
	* When and why using linked lists vs arrays
	* How to build and use linked lists
### Task 0: 0-print\_list.c
	* Write a function that prints all the elements of a list\_t list.
	* Prototype: size\_t print\_list(const list\_t *h);
	* Return: the number of nodes
	* Format: see example
	* If str is NULL, print [0] (nil)
	* You are allowed to use printf
### Task 1: 1-list\_len.c
	* Write a function that returns the number of elements in a linked list_t list.
	* Prototype: size_t list_len(const list_t *h);
### Task 2: 2-add\_node.c
	* Write a function that adds a new node at the beginning of a list\_t list.
	* Prototype: list\_t *add_node(list_t **head, const char *str);
	* Return: the address of the new element, or NULL if it failed
	* str needs to be duplicated
	* You are allowed to use strdup
### Task 3: 3-add\_node\_end.c
	* Write a function that adds a new node at the end of a list\_t list.
	* Prototype: list\_t *add_node_end(list_t **head, const char *str);
	* Return: the address of the new element, or NULL if it failed
	* str needs to be duplicated
	* You are allowed to use strdup
### Task 4: 4-free\_list.c
	* Write a function that frees a list\_t list.

	* Prototype: void free\_list(list\_t *head);
### Task 5: 100-first.c
	* Write a function that prints You're beat! and yet, you must allow,
	  \nI bore my house upon my back!\n before the main function is executed.
	* You are allowed to use the printf function
### Task 6: 101-hello\_holberton.asm
	* Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
	* You are only allowed to use the printf function
	* You are not allowed to use interrupts
	* Your program will be compiled using nasm and gcc
