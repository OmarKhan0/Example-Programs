#include <signal.h>
#include <stdio.h>


char x = 1;

void sig_handler(int sig_num)
{
	static int i = 0;
	i++;
	x = 0;
	printf("In signal handler: %d, i = %d\n",sig_num,i);
}



int main() 
{
	int i;
	signal(SIGRTMIN + 2, sig_handler);


	while(x == 1); /*if sufficient level of compiler optimization (greater then or equal to O1), then code stucks here
	even after signal is received */

	printf("Reached End\n");

	return 0;
}
