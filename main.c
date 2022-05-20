#include "simpleshell.h"
#include <stdio.h>

/**
* main - program entry point
*
* @ac: number of arguments
* @args: program arguments
*
* Return: always 0 (success)
*/

int main(int ac, char *args[])
{
	if (ac < 2)
	{
		printf("error: few arguments\n");
		return (-1);
	}

	char *cmdArgs[] = {"/bin/ls", "-l", args[1], NULL};

	if (execve(cmdArgs[0], cmdArgs, NULL) == -1)
	{
		perror("error: directory or file not found");
		return (-1);
	}

	printf("done %s\n", "🎉");

	return (0);
}
