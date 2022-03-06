#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
int main()
{
	int fd,rv;
	char *str = "1234";
	char *str1 = "abcdefg"; 
	
	fd = open("/home/sahil/omar_git/Kernel_modules/test_file",O_RDWR);
	if (fd < 0){
		printf("Error in opening file\n");
		return -1;
	}

	rv = write(fd, str, strlen(str));
	if (rv <= 0) {
		perror("Error is");
		printf("write failed rv %d, errno %d\n",rv,errno);
	}	

	rv = write(fd,str1, strlen(str1));
	if (rv <= 0) {
		printf("write failed rv %d, errno %d\n",rv, errno);
	}

	close(fd);

	return 0;
}
