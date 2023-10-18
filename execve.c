#include "shell.h"
/**
 * this gets the input then executes the command
 */
int prog_execute(char **args)
{
    char *cmd = NULL;
    char output;

    if (args)
    {
        
        cmd = args[0];

	output = (execve(cmd, args, NULL));    

        if (output == -1)
	{
            perror("Error occured did not execute");
        }
    }
    return 0;

}
