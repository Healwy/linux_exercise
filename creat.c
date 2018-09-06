#include "apue.h"


int main(int argc, char* argv[])
{
	int fd;
	fd = creat("hello.txt",0777);
	printf("%d\n",fd);
	return 0;	
}
