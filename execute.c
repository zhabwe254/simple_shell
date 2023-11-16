#include "shell.h"

void exec_command(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		gidi_print("forking error");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *args[169];
		int arg_count = 0;

	char *token = strtok((char *)command, " ");
	while (token != NULL)
	{
		args[arg_count++] = token;
		token = strtok(NULL, " ");
	}
	args[arg_count] = NULL;

	execvp(args[0], args);

	gidi_print("Error in the executing command.\n");
	exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}

