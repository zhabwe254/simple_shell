#include "shell.h"
/*
* Prints
*
*/


void gidi_print(const char *message)
{
	write(STDOUT_FILENO, message, strlen(message));
}

