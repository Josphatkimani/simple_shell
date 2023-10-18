#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
extern char **environ;
void shell(void);
void non_shell(void);
char *run_shell(void);
char **parse_shell(char *cmd);
int prog_execute(char **args);
int process(char **args);
char *run_nonshell(void);

#endif
