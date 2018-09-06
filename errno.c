#include "apue.h"


int main(int argc, char*argv[])
{
//	fprintf(stderr,"EACCES: %s\n",strrror(EACCES));
	errno = ENOENT;	
	perror(argv[0]);
}
