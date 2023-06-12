#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: pointer to convert
 * Return: returns an integer value
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int num = 0;
	int sign = 1;
	int ehi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			sign *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			ehi = 1;
			num = (num * 10) + (s[c] - 48);
			c++;
		}
		if (ehi == 1)
		{
			break;
		}
		c++;
	}
	num *= sign;
	return (num);
}
