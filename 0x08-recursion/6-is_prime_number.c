/**
 * checkfactors - check the number of factors of a given number.
 * @n: the number whose factors to check.
 * @i: iteration of factors.
 * Return: 1 if n is prime, 0 otherwise
 */

int checkfactors(int n, int i)
{
	if (i == n && i != 1)
		return (1);
	else if (n % i == 0 && i != 1)
		return (0);
	else if (i < n)
		return (checkfactors(n, i + 1));
	else
		return (0);
}

/**
 * is_prime_number - test if a given number is prime.
 * @n: the number to test.
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (checkfactors(n, 1));
}
