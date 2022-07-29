#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - entry point
 *@s1: args one
 *@s2: args two
 *@n: args three
 *Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *stup;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	stup = malloc(sizeof(char) * (i + n + 1));
	if (stup == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		stup[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		stup[i] = s2[j];
		i++, j++;
	}
	stup[i] = '\0';
	return (stup);
}
