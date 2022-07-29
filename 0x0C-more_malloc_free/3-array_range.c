#include "main.h"
#include <stdlib.h>

/**
 *array_range - entry point
 *@min: arg one
 *@max: arg two
 *Return: pointer
 */

int *array_range(int min, int max)
{
	int *pp;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	pp = malloc(size * sizeof(*pp));
	if (pp == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; i++, min++)
		*(pp + i) = min;
	return (pp);
}
