#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lca;
	for (lca = 'a'; lca <= 'z'; lca++)
		putchar(lca);
	putchar('\n');
	return (0);
}
