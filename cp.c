#include "apue.h"
#define BUF_SIZE 4096

int main(int argc, char* argv[])
{
	int 	n;
	char	buf[BUF_SIZE];
	
	while((n = read(0,buf,BUF_SIZE)))
		if((write(1,buf,n)) != n)
			printf("write error!\n");

	if(n < 0)
		printf("read error!\n");
	return 0;
}
