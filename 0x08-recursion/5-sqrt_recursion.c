/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number whose square root to compute.
 * Return: the natural square root of n.
 */
int check (int n, int x)
{
	if (n < x)
		return (-1);
	if (x * x == n)
		return (x);
	return (check(n, x + 1));
}
int _sqrt_recursion(int n)
{
	int result = check(n, 1);
	return (result);
}

