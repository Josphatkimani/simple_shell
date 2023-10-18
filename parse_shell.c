#include "shell.h"
/**
 * This is a programme that will split the string of array characters and
 put them in slots
 * This programme should return the string of array of characters
 */

char **parse_shell(char *cmd){
 int bufersize = 128;
 int i = 0;
 char **tokens = malloc(bufersize * sizeof(char *));
 char *token;

 if (!tokens)
 {
  fprintf(stderr, " error in allocation \n");
  exit(EXIT_FAILURE);
 }
 token = strtok(cmd, Delim);
 while (token != NULL)
 {
  tokens[i] = token;
  i++;
  if (i >= bufersize)
  {
   bufersize += bufersize;
   tokens = realloc(tokens, bufersize * sizeof(char *));
   if (!tokens)
   {
    fprintf(stderr, "reallocation error in split_line: tokens");
    exit(EXIT_FAILURE);
   }
  }
  token = strtok(NULL, Delim);
 }
 tokens[i] = NULL;
 return (tokens);
}
