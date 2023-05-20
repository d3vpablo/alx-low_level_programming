#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet in reverse, followed by a newline
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lca;

	for (lca = 'z'; lca >= 'a'; lca--)
		putchar(lca);
	putchar('\n');
	return (0);
}
