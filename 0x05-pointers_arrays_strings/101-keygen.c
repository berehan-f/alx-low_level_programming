#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char passcode[84];
	int i = 0, total = 0, half_total1, half_total2;

	srand(time(0));

	for (total; total < 2772; total += passcode[i], i++)
		passcode[i] = 33 + rand() % 94;

	passcode[i] = '\0';

	if (total != 2772)
	{
		half_total1 = (total - 2772) / 2;
		half_total2 = (total - 2772) / 2;
		if ((total - 2772) % 2 != 0)
			half_total1++;

		for (i = 0; passcode[i]; i++)
		{
			if (passcode[i] >= (33 + half_total1))
			{
				passcode[i] -= half_total1;
				break;
			}
		}
		for (i = 0; passcode[i]; i++)
		{
			if (passcode[i] >= (33 + half_total2))
			{
				passcode[i] -= half_total2;
				break;
			}
		}
	}

	printf("%s", passcode);

	return (0);
}
