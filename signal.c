#include "apue.h"

void sig_int(int signo)
{
	printf("interrupt!\n");
}

int main(int argc,char *argv[])
{
	if((signal(SIGINT,sig_int)) == SIG_ERR)
		printf("signal error\n");
	sleep(100);
	return 0;
}
