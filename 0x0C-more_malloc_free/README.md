### Task 2: file - 2-calloc.c
        - Write a function that allocates memory for an array, using malloc.
        - Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
        - The _calloc function allocates memory for an array of nmemb elements of size bytes each,
          and returns a pointer to the allocated memory.
        - The memory is set to zero
        - If nmemb or size is 0, then _calloc returns NULL
        - If malloc fails, then _calloc returns NULL
### Task 3: file - 3-array\_range.c
        - Write a function that creates an array of integers.
        - Prototype: int *array\_range(int min, int max);
        - The array created should contain all the values from min (included) to max (included),
          ordered from min to max
        - Return: the pointer to the newly created array
        - If min > max, return NULL
        - If malloc fails, return NULL
### Task 4: file - 100-realloc.c
        - Write a function that reallocates a memory block using malloc and free
        - Prototype: void *_realloc(void *ptr, unsigned int old\_size, unsigned int new\_size);
        - where ptr is a pointer to the memory previously allocated with a call to malloc:
          malloc(old_size)
        - old\_size is the size, in bytes, of the allocated space for ptr
        - and new\_size is the new size, in bytes of the new memory block
        - The contents will be copied to the newly allocated space,
          in the range from the start of ptr up to the minimum of the old and new sizes
        - If new\_size > old\_size, the "added" memory should not be initialized
        - If new\_size == old\_size do not do anything and return ptr
        - If ptr is NULL, then the call is equivalent to malloc(new\_size),
          for all values of old_size and new_size
        - If new\_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr).
          Return NULL
        - Don't forget to free ptr when it makes sense
### Task 5: file - 101-mul.c
        - Write a program that multiplies two positive numbers.
        - Usage: mul num1 num2
        - num1 and num2 will be passed in base 10
        - Print the result, followed by a new line
        - If the number of arguments is incorrect, print Error, followed by a new line,
          and exit with a status of 98
        - um1 and num2 should only be composed of digits. If not, print Error, followed by a new line,
          and exit with a status of 98
        - You are allowed to use more than 5 functions in your file
        - You can use bc (man bc) to check your results.
