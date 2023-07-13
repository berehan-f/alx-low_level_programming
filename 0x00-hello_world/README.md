# Name of project: 0x00. C - Hello, World
## Learning objectives:
	- Why C programming is awesome
	- Who invented C
	- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
	- What happens when you type gcc main.c
	- What is an entry point
	- What is main
	- How to print text using printf, puts and putchar
	- How to get the size of a specific type using the unary operator sizeof
	- How to compile using gcc
	- What is the default program name when compiling with gcc
	- What is the official C coding style and how to check your code with betty-style
	- How to find the right header to include in your source code when using a standard library function
	- How does the main function influence the return value of the program
### Exercise 0: Preprocessor
	- Write a script that runs a C file through the preprocessor and save the result into another file.
	- The C file name will be saved in the variable $CFILE
	- The output should be saved in the file c
	- File (script) name: 0-preprocessor
### Exercise 1: Compiler
	- Write a script that compiles a C file but does not link.
	- The C file name will be saved in the variable $CFILE
	- The output file should be named the same as the C file, but with the extension .o instead of .c.
	- Example: if the C file is main.c, the output file should be main.o
	- File (Script) name: 1-compiler
### Exercise 2: Assembler
	- Write a script that generates the assembly code of a C code and save it in an output file.
	- The C file name will be saved in the variable $CFILE
	- The output file should be named the same as the C file, but with the extension .s instead of .c.
	- Example: if the C file is main.c, the output file should be main.s
	- File (Script) name: 2-assembler
### Exercise 3: Name
	- Write a script that compiles a C file and creates an executable named cisfun.
	- The C file name will be saved in the variable $CFILE
	- File (Script) name: 3-name
### Exercise 4: Hello, puts
	- Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
	- Use the function puts
	- You are not allowed to use printf
	- Your program should end with the value 0
	- File (script) name: 4-puts.c
### Exercise 5: Hello, printf
	- Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
	- Use the function printf
	- You are not allowed to use the function puts
	- Your program should return 0
	- Your program should compile without warning when using the -Wall gcc option
	- File (script) name: 5-printf.c
### Exercise 6: Size is not grandeur: territory does not make a nation
	- Write a C program that prints the size of various types on the computer it is compiled and run on.
	- You should produce the exact same output as in the example
	- Warnings are allowed
	- Your program should return 0
	- You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
	- File (script) name: 6-size.c
