#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
	printf("Testing open(), close(), read(), write().\nWe will read from input.txt and write to output.txt.\n\n");
	int filedescriptor = open("input.txt", O_RDONLY);
	// test reading the file
	char buf[100]; 
	int bytes_read;
	bytes_read=read(filedescriptor,buf,11);
	buf[bytes_read]='\0';
	printf("Text read from input.txt:\n%s\n\n",buf );
	close(filedescriptor);

	int filedescriptor2 = open("output.txt", O_WRONLY);
	// test writing to the file
	char * buf1="This is an example of write\n";
	int bytes_wrote;
	bytes_wrote=write(filedescriptor2, buf1,strlen(buf1));
	printf("Text written to (beginning of) output.txt:\n%s\n\n",buf1 );
	close(filedescriptor2);
}