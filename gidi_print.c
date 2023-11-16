#include "shell.h"
/*
* Prints
*
*/


void gidi_print(const char *pushing)
{
	write(STDOUT_FILENO, pushing, strlen(pushing));
}

write(1, &pushing, strlen(pushing));
