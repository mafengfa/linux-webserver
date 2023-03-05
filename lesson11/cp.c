#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc,char* argv[]){
    if(argc!=3){
        return -1;
    }
    printf("%s %s\n",argv[1],argv[2]);
    int fd = open(argv[1],O_RDONLY);
    if(fd==-1){
        perror("open");
    }
    int distfd = open(argv[2],O_RDWR|O_CREAT,0777);
    if(distfd==-1){
        perror("open");
    }
    char buf[1024] = {0};
    int eof = 0;
    while((eof = read(fd,buf,32)) > 0){
        write(distfd,buf,eof);
    }
    close(fd);
    close(distfd);
    return 0;
}