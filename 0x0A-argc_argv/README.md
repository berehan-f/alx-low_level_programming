# Name of project: 0x0A. C - argc, argv
## Learning objectives:
	- How to use arguments passed to your program
	- What are two prototypes of main that you know of, and in which case do you use one or the other
	- How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters
### Task 0: file - 0-whatsmyname.c
	- Write a program that prints its name, followed by a new line.
	- If you rename the program, it will print the new name, without having to compile it again
	- You should not remove the path before the name of the program
### Task 1: file - 1-args.c
	- Write a program that prints the number of arguments passed into it.
	- Your program should print a number, followed by a new line
### Task 2: file - 2-args.c
	- Write a program that prints all arguments it receives.
	- All arguments should be printed, including the first one
	- Only print one argument per line, ending with a new line
### Task 3: file - 3-mul.c
	- Write a program that multiplies two numbers.
	- Your program should print the result of the multiplication, followed by a new line
	- You can assume that the two numbers and result of the multiplication can be stored in an integer
	- If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
### Task 4: file - 4-add.c
	- Write a program that adds positive numbers.
	- Print the result, followed by a new line
	- If no number is passed to the program, print 0, followed by a new line
	- If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
	- You can assume that numbers and the addition of all the numbers can be stored in an int
### Task 5: file - 100-change.c
	- Write a program that prints the minimum number of coins to make change for an amount of money.
	- Usage: ./change cents
	- where cents is the amount of cents you need to give back
	- if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
	- you should use atoi to parse the parameter passed to your program
	- If the number passed as the argument is negative, print 0, followed by a new line
	- You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
