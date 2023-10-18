#include "shell.h"

/**
 * shell_no_interactive - unix command line interpreter
 *
 * Return: void
 */
void non_shell(void)
{
	char *cmd;
	char **args;
	int progress = -1;

	while(1){
		if(progress == -1){
			cmd = run_nonshell();
			args = parse_shell(cmd);
			progress = prog_execute(args);

			free(cmd);
			free(args);
		}
		if(progress >=  0)
		{
			exit(progress);
		}
		free(cmd);
		free(args);
	}
}
