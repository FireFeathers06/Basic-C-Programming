#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void main(){

    char message[10];
    int fd = open("test.txt", O_WRONLY|O_CREAT, 0777);

    //ssize_t write(int fd, const void *buf, size_t count);
    int w = write(fd,"message",10);
    close(fd);

}