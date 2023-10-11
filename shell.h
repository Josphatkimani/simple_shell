#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int ac, char **argv);
ssize_t getline(char **lineptr, size_t * n,FILE * stream);
char *strtok(char * str, const char * delim);
void execshell(char **argv);


#endif
