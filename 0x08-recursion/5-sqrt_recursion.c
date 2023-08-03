/**
 * check - checks if a number has a square root.
 * @n: the number to check.
 * @x: check if x is the square root of n.
 * Return: the square root of n, or -1 otherwise.
 */

int check(int n, int x)
{
	if (n < x)
		return (-1);
	if (x * x == n)
		return (x);
	return (check(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number whose square root to compute.
 * Return: the natural square root of n.
 */

int _sqrt_recursion(int n)
{
	int result = check(n, 1);

	return (result);
}
