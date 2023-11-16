#include "shell.h"

/*
* User input
*
*/

void say_command(char *command, size_t size)
{
if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			gidi_print("\n");
			exit(EXIT_SUCCESS);
		}
	else
		{
			gidi_print("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
