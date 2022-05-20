#include <stdio.h>
#include "simpleshell.h"

int main()
{
	char *args[] = {"/bin/sh", NULL};

	if (execve(args[0], args, NULL) == -1)
	{
		perror("error: could not complete command");
		exit(90);
	}	
	
	return (0);
}
