/**
 * _strstr - locates a substring.
 * @needle: locate the first occurence of this substring.
 * @haystack: locate substring in this string.
 * Return: a pointer to the neginning of the located substring or,
 *         NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, found;

	for (i = 0; haystack[i]; i++)
	{
		found = 0;
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] == needle[j])
			{
				found = 1;
				continue;
			}
			else
			{
				found = 0;
				break;
			}
		}

		if (found == 1)
			return (haystack + i);
	}

	return (0);
}
