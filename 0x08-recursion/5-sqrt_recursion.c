/**
 * checksquare - checks if a number has square root.
 * @n: the number whose square root to check.
 * @x: check if x is the square root of n.
 * Return: x if x is natural square root of n.
 *         -1 if n doesn't have a square root.
 */

int checksquare(int n, int x)
{
	if (x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (checksquare(n, x + 1));
}

/**
 * _sqrt_recursion - find the natural square root of a number.
 * @n: the number whose square root to find.
 * Return: the square root of n.
 */

int _sqrt_recursion(int n)
{
	int sqrt;
	int i = 1;

	sqrt = checksquare(n, i);
	return (sqrt);
}
