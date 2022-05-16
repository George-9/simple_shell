#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

int main(int ac, char *args[])
{
	if(ac < 2)
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
