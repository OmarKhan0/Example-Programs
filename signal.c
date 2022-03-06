#include <signal.h>
#include <stdio.h>


void sig_handler(int sig_num)
{
	static int i = 0;
	i++;

	printf("In signal handler: %d, i = %d\n",sig_num,i);
}



int main() 
{
	int i;
	signal(SIGRTMIN + 2, sig_handler);

	for (i = 0; i < 10; i++)
		raise(SIGRTMIN + 2);



	return 0;
}
