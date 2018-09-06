#include "apue.h"


int main(int argc,char *argv[])
{
	int fd = open("hello.txt",O_RDWR|O_CREAT|O_TRUNC,0777);
	lseek(fd,0,SEEK_SET);
//	write(fd,"hello linux!\n",13);
	close(fd);
	return 0;
	
}
