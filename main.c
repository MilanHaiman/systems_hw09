#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
	int filedescriptor = open("intput.c", O_RDONLY);
	// printf("%s\n", ); // test reading the file
	close(filedescriptor);

	int filedescriptor2 = open("output.c", O_WRONLY);
	// test writing to the file
	close(filedescriptor2);
}