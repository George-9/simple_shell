#include <stdio.h>
#include "simpleshell.h"

/**
* main - entry point
*
* @argc: length of program arguments
* @args: program arguments
* @env: environmental variables
*
* Return: always 0 (Success)* 
*/

int main(int argc, char *args[], char *env[])
{
	char *args[] = {"/bin/sh", NULL};

	if (execve(args[0], args, NULL) == -1)
	{
		perror("error: could not complete command");
		exit(90);
	}

	return (0);
}
