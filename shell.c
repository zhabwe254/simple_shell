#include "shell.h"
/*
* Main shell
*
*/


int main(void)
{
	char command[169];

	while (true)
	{
		display_prompt();
		say_command(command, sizeof(command));
		exec_commansd(command);
	}

return (0);
}
