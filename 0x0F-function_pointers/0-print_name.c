#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -function to print a name
 * @name: The name to be printed out
 * @f: parameter
 *
 * Description: This function prints out the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
