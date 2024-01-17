/**
 * getlen - get the length of a string.
 * @s: the string whose length to get.
 */

int getlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 *
 *
 */
int charcompare(char *s, int i, int j)
{
	if (i > j)
		return (1);
	if (s[i] == s[j])
		return (charcompare(s, i + 1, j - 1));
	return (0);
}
int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (charcompare(s, 0, getlen(s) - 1));
}
