#include "shell.h"
/**
 * This is a programme were new process are created and executed
 * This process should first create a child process and then the parent
 * return 1 on success
 */

int process(char **args)
{
	pid_t prog;
	int progress;

	prog = fork();
	if (prog == 0){
		if (execvp(args[0], args) == -1){
			perror("Error > in child process");
		}
		exit(EXIT_FAILURE);
	}
	else if (prog < 0){
		perror("Error > in the programme");
	}
	else{
		do{
			waitpid(prog, &progress, WUNTRACED);
		}
		while (!WIFEXITED(progress) && !WIFSIGNALED(progress));
	}
	free(args);

	return (-1);
}
