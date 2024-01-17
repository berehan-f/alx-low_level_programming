/**
 * getlen - get the length of a string.
 * @s: the string whose length to get.
 * Return: string length.
 */

int getlen(char *s)
{

	if (*s != 0)
		return (1 + getlen(s + 1));

	return (0);
}

/**
 * charcompare - checks if two different indexes of a string are identical.
 * @s: the string to check.
 * @i: first index of the string.
 * @j: second index of the string.
 * Return: 1 if opposite indexes are identical, 0 otherwise.
 */

int charcompare(char *s, int i, int j)
{
	if (i > j)
		return (1);
	if (s[i] == s[j])
		return (charcompare(s, i + 1, j - 1));
	return (0);
}

/**
 * is_palindrome - checks if a given string is palindrome.
 * @s: the string to check.
 * Return: 1 if the string is palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (charcompare(s, 0, getlen(s) - 1));
}
