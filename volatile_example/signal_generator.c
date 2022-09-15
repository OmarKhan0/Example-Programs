#include <signal.h>
#include <stdio.h>

int main()
{
	int pid;

	printf("Enter PID of Process we want to sent signal to\n");
	scanf("%d",&pid);
	printf("pid = %d\n",pid);
	
	for (int i = 0; i < 1; i++)
		kill(pid,SIGRTMIN + 2);


	return 0;
}
