#include <signal.h>
#include <stdio.h>

int main()
{
	int pid;
	int signal_number,i;

	printf("Enter PID of Process we want to sent signal to\n");
	scanf("%d",&pid);
	printf("pid = %d\n",pid);
	printf("Enter Signal number we want to generate\n");
	scanf("%d",&signal_number);
	printf("Signal number = %d\n",signal_number);
	
	for (i = 0; i < 1000; i++)
		kill(pid,signal_number);


	return 0;
}
