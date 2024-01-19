#include <stdlib.h>
#include <stdio.h>

#include "main.h"
int str_len(char *);
char *shift_integers(char *r, int carry, int index);

/**
 * trim - removes initial zeros from string.
 * @s: the string to trim.
 * Return: pointer to the trimmed string.
 */

char *trim(char *s)
{
	if (*s == 0)
	{
		s = "0";
		return (s);
	}	
	if (*s == '0')
		return (trim(s + 1));

	else
		return (s);
}

/**
 * add_ints - adds two ints.
 * @r: string.
 * @index: number of iteration through each digit in the iteration process.
 * @store: store
 * @carry: carry
 * @size_r: the maximum size of the buffer that holds result of addition.
 * Return: string
 */

char *add_ints(char *r, int index, int size_r, int store, int carry)
{

	if (index > size_r - 1)
		return (0);

	else if (index == size_r - 1 && carry > 0)
		return (0);

	
	r = shift_integers(r, store, index);
	return (r);
}
/**
 * shift_integers - shifts array elements to the right of the buffer.
 * @r: the buffer.
 * @carry: carry to be added to the buffer.
 * @index: length of the previous sum.
 * Return: the shifted string.
 */

char *shift_integers(char *r, int store, int index)
{
	int i;

	for (i = index; i > 0; i--)
	{
		r[i] = r[i - 1];

		if (i == 1)
		{
			i--;
			break;
		}
		else
			r[i - 1] = r[i - 2];
	}

	r[i] = store + '0';
	return (r);
}


/**
 * infinite_add - adds two strings of numbers.
 * @n1: the first number in string format to be added.
 * @n2: the second number in string format to be added.
 * @r: the buffer to store the result of addition.
 * @size_r: buffer size of r.
 * Return: the result of addition, if the result can be stored in r.
 *         else return 0.
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, sum, carry = 0;
	int store, index = 0;

	n1 = trim(n1);
	n2 = trim(n2);

	for (i = 0; n1[i + 1]; i++)
		;
	for (j = 0; n2[j + 1]; j++)
		;
	for (; (i >= 0 || j >= 0); i--, j--, index++)
	{
		if (i < 0)
			sum = (n2[j] - '0') + carry;
		else if (j < 0)
			sum = (n1[i] - '0') + carry;
		else
			sum = (n1[i] - '0') + (n2[j] - '0') + carry;

		carry = sum / 10;
		store = sum % 10;
		r = add_ints(r, index, size_r - 1, store, carry);

		if (r == 0)
			return (0);
	}
	if (carry > 0)
		r = shift_integers(r, carry, index);
	r[index] = '\0';

	return (r);
}

/**
 * get_digit - get digit from character.
 * @s: the character to convert to digit.
 * Return: digit
 */

int get_digit(char s)
{
	return (s - '0');
}

/**
 * string_shift - shifts string to the right by one.
 * @s: the string to shift.
 * @size: the size of the string.
 * Return: the shifted string.
 */

char *string_shift(char *s, int size)
{
	int i;

	for (i = size - 1; i > 0; i--)
		s[i] = s[i - 1];
	return (s);
}

/**
 * factor_shift - adds zeros for result of multiplication depending on position
 * @factors: all factors to be shifted.
 * @len2: length of second multiplier.
 * Return: shifted array of pointers.
 */

char **factor_shift(char **factors, int len2)
{
	int i, j, k, size;

	for (i = 0; i < len2; i++)
	{
		size = str_len(factors[i]) + 1;
		factors[i] = realloc(factors[i], size + i);

		for (j = str_len(factors[i]), k = 0; k < i; k++)
		{
			factors[i][j + k] = '0';
		}
		factors[i][j + k] = '\0';
	}

	return (factors);
}

/**
 * is_digit - checks if all characters in a string are digits.
 * @s: the character to check.
 * Return: 1 if all characters are digits, 0 otherwise.
 */

int is_digit(char *s)
{
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			s++;
		}
		else
			return (0);
	}

	return (1);
}

/**
 * strlen - get string lenth with out counting terminating null byte.
 * @s: the string to get the length of.
 * Return: length of string.
 */

int str_len(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * digit_multiply - multiplies a string of numbers by a one digit multiplier.
 * @mul2: the string of numbers to be multiplied.
 * @len2: length of the multiplicand string.
 * @num: the 1 digit multiplier.
 * Return: a string of multiplication result.
 */

char *digit_multiply(char *mul1, int num, int len1)
{
	char *s;
	int dot, product, digit, carry = 0;
	int i = len1 - 1;
	int j = 1;

	s = malloc(sizeof(char));
	if (s == NULL)
	     return (NULL);

	while (i >= 0)
	{
		digit = get_digit(mul1[i]);
		product = digit * num + carry;
		dot = product % 10;
		carry = product / 10;
		s[0] = dot + '0';

		if (i != 0 || (i == 0 && carry != 0))
		{
			s = realloc((void *) s, j + 1);
			s = string_shift(s, j + 1);
		}
		if (i == 0 && carry != 0)
			s[0] = carry + '0';

		j++;
		i--;
	}
	s = realloc(s, j + 1);
	if (s == NULL)
	{
		printf("Error reallocating\n");
		exit(1);
	}
	s[j] = '\0';

	return (s);
}
/**
 * main - multiplies two positive numbers.
 * @argc: the number of command line arguments passed to the program.
 * @argv: an array of all the command line arguments.
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
	char *mul1, *mul2;
	char *final = malloc(sizeof(char) * 100);
	char *array = final;
	char **factors;
	int i, j, len1, len2, num, flag = 0;

	final[99] = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	mul1 = argv[1];
	mul2 = argv[2];

	if (!is_digit(mul1) || !is_digit(mul2))
	{
		printf("Error\n");
		exit(98);
	}

	len1 = str_len(mul1);
	len2 = str_len(mul2);

	factors = malloc(len2 * sizeof(char *));

	if (factors == NULL)
		return (0);
	j = len2 - 1;

	for (i = 0; j >= 0; i++, j--)
	{
		num = get_digit(mul2[j]);
		factors[i] = digit_multiply(mul1, num, len1);
	}

	factors = factor_shift(factors, len2);

	for (i = 0; i < 99; i++)
		final[i] = '0';

	array = trim(array);

	for (i = 0, j = 1; i < len2; i++)
	{
		array = infinite_add(array, factors[i], final, 100 * (i + j));

		while (array == NULL)
		{
			final = realloc(final, 100 * (i + (++j)));
			flag = 1;
			
		}
		if (flag)
			i--;
	}
	printf("%s\n", array);
	return (0);
}
