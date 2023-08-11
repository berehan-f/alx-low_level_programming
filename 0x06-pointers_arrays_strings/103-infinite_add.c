#include "main.h"

/**
 * trim - removes initial zeros from string.
 * @s: the string to trim.
 * Return: pointer to the trimmed string.
 */

char *trim(char *s)
{
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
	int i;

	if (index > size_r - 1)
		return (0);
	else if (index == size_r - 1 && carry > 0)
		return (0);
	for (i = index; i > 0; i--)
	{
		r[i] = r[i - 1];
		if (i == 1)
			continue;
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
	{
		for (i = index; i > 0; i--)
		{
			r[i] = r[i - 1];
			if (i == 1)
			{
				r[i - 1] = carry + '0';
				break;
			}
			r[i - 1] = r[i - 2];
		}
		index++;
	}
	r[index] = '\0';
	return (r);
}
