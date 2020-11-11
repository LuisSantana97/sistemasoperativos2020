#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc, char **argv){
	char *sourceFile = argv[1];
	char *destinationFile = argv[2];
	int fd = open(sourceFile, O_RDONLY, 0); //abrir archivos, fopen
	if(fd<0){
		printf("error al abrir el archivo \n");
		return 1;
	} 
	
	int dfd = open(destinationFile, O_WRONLY | O_CREAT, 0);
	char c;
	while(read(fd, &c, 1)){
		write(dfd, &c,1);
	}
	close(dfd);
	close(fd);
	return 0; 
}