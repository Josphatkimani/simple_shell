#include "shell.h"
/**
 * print a prompt for the user
 * then get the prompt from the standard input to the assigned variable that will hold the input using getline function
 * we need to allocated space to the input using malloc and realloc to reallocate space which will be done dynamically
 * one this is done it may lose the input intial or original prompt therefore a strcpy is used to prevent this
 * after the programme you need to free the allocated spaces should be done manuall
 */

int main(int ac, char **argv)
{
    char *cmd = NULL, *cmd_org= NULL;
    size_t n = 0;
    ssize_t cread; 
    char *token;
    const char *delim = " \n";
    int i = 0; 
    int counter = 0;
    (void)ac;
    while (1)
    {

    printf("myshell> ");

    cread = getline(&cmd, &n, stdin);

    cmd_org = malloc(sizeof(char) * cread);

    if (cmd_org == NULL)
    {
        perror("Erro No Memory allocated");
        return (-1);
    }

    strcpy(cmd_org , cmd);

    if (cread == -1)
    {
        printf("Nothing processed Exiting \n");
        return (-1);
    }
    else 
    {

        token = strtok(cmd , delim);

        while (token != NULL)
	{
            counter++;
            token = strtok(NULL, delim);
        }
        counter++;

        argv = malloc(sizeof(char *) * counter);

        token = strtok(cmd_org , delim);

        for (i = 0; token != NULL; i++){
            argv[i] = malloc(sizeof(char) * strlen(token));
            strcpy(argv[i], token);

            token = strtok(NULL, delim);
        }
        argv[i] = NULL;


        free(cmd);
        free(cmd_org);
    }
    
    }

    return (0);
}
