#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - Entry point
 *@b: arg one
 *Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *pp;

	pp = malloc(b);

	if (pp == NULL)
		exit(98);

	return (pp);
}
