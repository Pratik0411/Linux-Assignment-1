#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

void main()
{
	
	char Rbuff[50];
	
	int fd1 = open("input.txt", O_RDONLY, 777);
	int fd2 = open("output.txt",O_CREAT | O_RDWR, 777); 
	int len;
	
	read(fd1, Rbuff, 50);
	
	printf("data read = %s\n",Rbuff);
	
	len = write(fd2, Rbuff, 50);
	
	printf("data written = %d \n", len);
	
	
	
	close(fd2);
	close(fd1);
	
}
