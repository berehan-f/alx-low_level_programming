/**
 * get_factor_num - get the number of prime factors of an integer.
 * @n: the integer whose total number of prime factors to get.
 * @x: factors.
 * Return: the number of prime factors of n.
 */

int get_factor_num(int n, int x)
{
	if (n % x == 0 && n >= x)
		return (1 + get_factor_num(n, x + 1));
	else if (n % x != 0 && n >= x)
		return (get_factor_num(n, x + 1));
	return (0);
}

/**
 * is_prime_number - check for a prime number.
 * @n: the number to be checked.
 * Return: 1 if the input integer is a prime number,
 *         0 otherwise.
 */

int is_prime_number(int n)
{
	int x = 1, factor_num;

	factor_num = get_factor_num(n, x);

	if (factor_num == 2)
		return (1);
	return (0);
}

