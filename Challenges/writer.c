/*
Author : H4nr1s3ld0n
Description : A small writer for the n°2 assessment of the course to experiment with POSIX 
Date : 14/05/2026
*/


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
int fd;
ssize_t nr;

	if (argc < 3){
		printf("Usage : %s <path> <string>\n", argv[0]);
		return 1;
	}

fd = open(argv[1], O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd == -1)
	{
		printf("Error in creating the path...");
		return 1;
	}
	

	nr = write (fd, argv[2], strlen(argv[2]));
	if (nr == -1)
	{
	printf("Error in writing the string...");
	return 1;
	}
	


printf("The file %s was successfully written, writing the string.\n", argv[1]);
printf("The file was successfully written, it's length is : %zd\n", nr);

close(fd);
return 0;

}
