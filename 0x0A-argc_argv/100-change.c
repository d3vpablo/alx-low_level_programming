#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: length of argv
 * @argv: number of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int cents, total_coin_count, coin_count, index;
	int coins[] = {25, 10, 5, 2, 1};

	cents = total_coin_count = coin_count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]); /*Covert str to int*/

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	index = 0;
	while (index < 5)
	{
		if (cents >= coins[index])
		{
			coin_count = (cents / coins[index]);
			total_coin_count += coin_count;
			cents = (cents % coins[index]);
		}
		index++;
	}
	printf("%d\n", total_coin_count);

	return (0);
}
