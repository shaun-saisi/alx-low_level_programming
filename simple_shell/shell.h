#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void _putchar(char c);
void display_the_prompt(void);
void to_print(const char *message);
void read_the_command(char *command, size_t size);
void execute_the_command(const char *command);

#endif
