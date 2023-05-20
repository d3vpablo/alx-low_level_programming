#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase,
 *followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lca;
	char uca;

	for (lca = 'a'; lca <= 'z'; lca++)
		putchar(lca);
	for (uca = 'A'; uca <= 'Z'; uca++)
		putchar(uca);
	putchar('\n');
	return (0);
}
