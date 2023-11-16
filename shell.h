#ifndef SHELL_H
#define SHELL_H

/*
* Gideon Habwe
*
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

/*
* prototypes
*
*/

int main(int ac, char **av);
void gid_prompt(void);
void gidi_print(const char *pushing);
void say_command(char *command, size_t size);
void exec_command(const char *command);

#endif /* SHELL_H */
