#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print all possible combinations of numbers
 * with no two numbers same in pairing
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x1, x2;

	for (x1 = 0; x1 <= 9; x1++)
	{
		for (x2 = 1; x2 <= 9; x2++)
		{
			if (x1 != x2 && x1 < x2)
			{
				putchar(x1 + '0');
				putchar(x2 + '0');
				if (x1 != 8 || x2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
