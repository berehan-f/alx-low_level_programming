#include <stdlib.h>

/**
 * get_length - computes the length of a string with out considering '\0'.
 * @s: the string whose length to compute.
 * Return: the length of s.
 */

int get_length(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
/**
 * argstostr - concatenates all the command line arguments of your program.
 * @ac: the number of command line arguments.
 * @av: a pointer to the array of command line arguments.
 * Return: the concatenated string.
 */

char *argstostr(int ac, char **av)

{
	int i, j, k = 0, len = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += (get_length(av[i]) + 1);
	len++;


	concat = (char *) malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < get_length(av[i]); ++j)
		{
			concat[k] = av[i][j];
			k++;
		}

		concat[k] = '\n';
	}

	concat[k] = 0;

	return (concat);
}
