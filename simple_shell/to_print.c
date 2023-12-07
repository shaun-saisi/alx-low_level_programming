#include "shell.h"


void to_print(const char *output_message)
{
	write(STDOUT_FILENO, output_message, strlen(output_message));
}
