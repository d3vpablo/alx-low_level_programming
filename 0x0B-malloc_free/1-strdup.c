#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: array of char
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *dest;
	int size, index = 0;

	if (str == NULL)
		return (NULL);
	size = 0;
	while (str[size] != '\0')
		size++;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		dest[index] = str[index];
	return (dest);
}
