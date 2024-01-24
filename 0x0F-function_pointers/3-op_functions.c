#include "3-calc.h"
/**
 * op_add - adds two numbers.
 * @a: first number to add.
 * @b: second number to add.
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two numbers.
 * @a: the minuend.
 * @b: the subtrahend.
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers.
 * @a: first number to multiply.
 * @b: second number to multiply.
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - integer divides two numbers.
 * @a: divisor.
 * @b: dividend.
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
		exit(100);
	return (a / b);
}
/**
 * op_mod - modulo divide two numbers.
 * @a: first number.
 * @b: second number.
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
		exit(100);
	return (a % b);
}
