#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_name - entry point
 *@name: string to be printed
 *@f: function to print string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
