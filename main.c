#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
	int filedescriptor = open("input.txt", O_RDONLY);
	// test reading the file
	char buf[100]; 
	int bytes_read;
	bytes_read=read(filedescriptor,buf,11);
	buf[bytes_read]='\0';
	printf("%s\n",buf ); 
	close(filedescriptor);

	int filedescriptor2 = open("output.txt", O_WRONLY);
	// test writing to the file
	char * buf1="This is an example of write\n";
	int bytes_wrote;
	bytes_wrote=write(filedescriptor2, buf1,strlen(buf1));
	close(filedescriptor2);
}