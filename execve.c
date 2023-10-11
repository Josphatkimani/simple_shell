#include "shell.h"
/**
 * this gets the input then executes the command
 */
void execshell(char **argv)
{
    char *input = NULL;
    char output;

    if (argv)
    {
        
        input = argv[0];

	output = (execve(input, argv, NULL)); 

        if (output == -1)
	{
            perror("Error occured did not execute");
        }
    }

}
