#include "shell.h"
/**
 * This is a programme that will split the string of array characters and
 put them in slots
 * This programme should return the string of array of characters
 */

char **parse_shell(char *cmd)
{       
        char *tokens[64];
        int i = 0;
        
        char *token = strtok(cmd, " \t\n\r\a\"");
        
        while (tokens != NULL){
                tokens[i] = strdup(token);
                token++;
                token = strtok(NULL, " \t\n\r\a\"");
        }       
                i++;
                printf("the token %d %s\n",i,tokens[i]);
		free(tokens[i]);
	return 0;
}
