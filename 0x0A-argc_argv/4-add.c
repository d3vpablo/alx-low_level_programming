#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main funct
 * @argc: param count
 * @argv: param poiter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	i = 1;
	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
