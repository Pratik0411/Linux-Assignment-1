#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <fcntl.h>
int main()
{
	int fd1, fd2;
	char random[4000]={};
	fd1 = open("hole.txt", O_CREAT | O_RDWR,777);
	fd2 = write(fd1, random, sizeof(random));
	int close(int fd1);
	return 0;	
}
