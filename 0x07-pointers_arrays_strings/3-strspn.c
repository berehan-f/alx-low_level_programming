/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to check for prefix.
 * @accept: the prefix substring.
 * Return: the number of bytes in the initial segment of s,
 *         which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, j, found;

	for (i = 0; s[i]; i++)
	{
		found = 0;

		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 1)
		{
			count++;
			continue;
		}
		else
			break;
	}
	return (count);
}

