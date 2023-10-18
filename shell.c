#include "shell.h"
/**
 * print a prompt for the user
 * then get the prompt from the standard input to the assigned variable that will hold the input using getline function
 * after the programme you need to free the allocated spaces should be done manuall
 */

void shell(void)
{
	char *cmd;
	char **args;
	int progress = -1;

	while(1)
{
	if(progress == -1)
	{
		printf("Kshell_$  ");
		cmd = run_shell();
		args = parse_shell(cmd);
		progress = prog_execute(args);
	}
	else
	{
		exit(progress);
	}
		free(cmd);
		free(args);
	}
}
