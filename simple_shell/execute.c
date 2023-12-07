
#include "shell.h"
/**
 * execute_the_command - function to execute the prompt
 * @command - pointer to the command
 */

void execute_the_command(const char *command)
{
        pid_t child_pid = fork();

        if (child_pid == -1){
                perror("fork");
                exit(EXIT_FAILURE);

        } else if (child_pid == 0) {
		char *args[2];
		args[0] = strdup(command);
		args[1] = NULL;		

                execve(args[0], args, NULL);
                perror("execve");
                exit(EXIT_FAILURE);
        } else {
                wait(NULL);
        }
}
