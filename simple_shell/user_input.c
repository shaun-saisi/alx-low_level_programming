#include "shell.h"
/**
 * read_the_command - function to read user input commands
 * @command - the command to be passed
 */

void read_the_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL) {
		if (feof(stdin)) {
			to_print("\n");
			exit(EXIT_SUCCESS);
		}else {
			to_print("Error from the input!\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
