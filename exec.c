#include "apue.h"
#define MAXLEN 20


int main(int argc,char* argv[])
{
	int status;
	pid_t pid;
	char buf[MAXLEN];
	while(fgets(buf,MAXLEN,stdin) != NULL)
		if(buf[strlen(buf)-1] == '\n')
			buf[strlen(buf)-1] = 0;
	if((pid = fork()) < 0)
		printf("fork error\n");
	else if(pid == 0)
	{
		execlp(buf,buf,(char*)0);
//		exit(2);
		return 2;
	}
	
	if((pid = waitpid(pid,&status,0)) < 0)
		printf("wait error\n");
	printf("child process status = %d\n",WEXITSTATUS(status));
	
	return 0;
	
}

