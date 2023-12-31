/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @accept: locate the first occurence of any of the bytes of this string.
 * @s: locate it in s:
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (0);
}
