#include"apue.h"

int main(int argc, char *argv[])
{
	DIR	*dp;
	struct dirent	*dirp;
	if(argc != 2)
		printf("usage: ls directory_name!\n");
	
	if((dp = opendir(argv[1])) == NULL)
		printf("open dir error!\n");
	while((dirp = readdir(dp)) != NULL)
		printf("%s\n",dirp->d_name);
	return 0;
}

