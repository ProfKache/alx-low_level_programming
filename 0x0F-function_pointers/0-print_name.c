#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function to call a function
 *
 * @name: Parameter 1
 * @f: parameter function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		if (name)
		{
			(*f)(name);
		}
	}
}
