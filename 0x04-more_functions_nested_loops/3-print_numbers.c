#include "main.h"
/* print_numbers - prints numbers betweeen 0 and 9
 * _putchar: prints out the numbers with a new line
 *
 */
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
	_putchar(num);
	}

	_putchar('\n');
}
