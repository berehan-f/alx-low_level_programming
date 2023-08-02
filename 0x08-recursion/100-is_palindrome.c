/**
 * is_palindrome - checks if the string is palindrome.
 * @S: the string to check.
 * Return: 1 if the string is palindrome,
 *         0 otherwise.
 */
int str_len(char *s)
{
	int i = 1;

	if (*(s + 1) == 0)
		return (i - 1);
	return (i + str_len(s + 1));
}

int compare(char *s1, char *s2)
{
	if (s1 + 1 == s2 && *s1 == *s2)
		return (1);
	if (s1 < s2 && *s1 == *s2)
		return (compare(s1 + 1, s2 - 1));
	if (s1 > s2)
		return (0);
	if (s1 == s2)
		return (1);
	return (0);
}

int is_palindrome(char *s)
{
	int i, x;

	if (*s == 0)
		return (1);
	i = str_len(s);
	x = compare(s, s + i);
	return (x);
}
