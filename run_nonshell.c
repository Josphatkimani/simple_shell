#include "shell.h"

/**
 * Unlike the run shell programme the character has to get the char from the internal process 
 * getline will be used to read the first char
 */
char *run_nonshell(void)
{
          int bufersize = 64;
          int i = 0;
          char *cmd = malloc(sizeof(char) * bufersize);
          int read;

 if (cmd == NULL)
 {
      fprintf(stderr,"Error >allocation error ");
      exit(EXIT_FAILURE);
 }
 while (1)
 {
      read = getchar();
 if (read == EOF)
  {
       free(cmd);
       exit(EXIT_SUCCESS);
  }
  else if (read == '\n')
  {
       cmd[i] = '\0';
       return (cmd);
  }
  else
  {
   cmd[i] = read;
  }
  i++;
  if (i >= bufersize)
  {
       bufersize ++;
       cmd = realloc(cmd, bufersize);
   if (cmd == NULL)
   {
       fprintf(stderr,"Error > reallocation error ");
       exit(EXIT_FAILURE);
   }
  }
 }
}
