#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars dynamically
 * @size: size of the array
 * @c: character to assign
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	array = (char *)malloc(size * sizeof(c));

	if (size == 0 || array == 0)
		return (NULL);

	index = 0;
	while (index < size)
	{
		array[index] = c;
		index++;
	}
	return (array);
}
