#include "shell.h"
/**
 * This is a programme that is used to call the interactive shell or the non interactive shell through the main function
 * isatty is used to determine the file descriptor open either the interactive shell or non interactive shell 
 * return 0 on success
 */

int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		shell();
	}
	else
	{
		non_shell();
	}
	return (0);
}
