#include "shell.h"
/**
 * This function is made to read the command from standard input stdin
 * *it should return the command typed by the user 
 * The getline function is used in this case
 */

char *run_shell(void)
{
	char *cmd = NULL;
	size_t n = 0;

	if(getline(&cmd,&n,stdin) == -1){
		if(feof(stdin)){
			free(cmd);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(cmd);
			perror("Error > no input detected");
			exit(EXIT_FAILURE);
		}
	}
	return (cmd);
}


