#include "shell.h"

int main(void) 
{
	char command[128];

	while (1) {
		display_the_prompt();
		read_the_command(command, sizeof(command));
		execute_the_command(command);
	}

	return (0);
}
