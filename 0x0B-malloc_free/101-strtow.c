#include <stdlib.h>

/**
 * get_word_num - get the number of words in a string,
 *                words are separared by space (' ').
 * @str: the string to get the word number of.
 * Return: the number of words.
 */

int get_word_num(char *str)
{
	while (*str)
	{
		if (*str != ' ' && (*(str + 1)  == ' ' || *(str + 1) == 0))
			return (1 + get_word_num((str + 1)));

		if (*str == ' ')
		{
			return (get_word_num(str + 1));
		}

		if (*str != ' ' && *str != 0 && *(str + 1) != ' ' && *(str + 1) != 0)
		{
			return (get_word_num(str + 1));
		}
	}

	return (0);
}
/**
 * strtow - splits a string into words.
 *          Each element of the array should contain a single word,
 *          null terminated.
 * @str: the string to split.
 * Return: a pointer to an array of strings(words).
 */

char **strtow(char *str)
{
	int i, j = 0, k = 0, word_num, word_length = 0, str_start;
	char **words;

	if (str == NULL || *str == 0)
		return (NULL);

	word_num = get_word_num(str);
	if (word_num == 0)
		return (NULL);

	words = (char **) malloc((word_num + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (word_length)
			{
				words[j] = (char *) malloc(sizeof(char) * (word_length + 1));
				if (words[j] == NULL)
					return (NULL);
				for (k = 0; k < word_length; k++)
					words[j][k] = str[str_start + k];
				j++;
				word_length = 0;
			}
		}

		else if (word_length++ == 0)
			str_start = i;
	}

	words[j] = NULL;
	return (words);
}
