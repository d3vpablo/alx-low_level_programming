#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{	char lca = 'a';

	while (lca <= 'z')
	{
		if (lca != 'q' && lca != 'e')
			putchar(lca);
		lca++;
	}
	putchar('\n');
	return (0);
}
