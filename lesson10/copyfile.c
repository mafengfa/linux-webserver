#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
int main(){
    int fd;
    fd = open("a.txt",O_RDWR);
    if(fd==-1){
        perror("hello");
        return 0;
    }
    int fd1 = open("b.txt",O_RDWR|O_CREAT,0777);
    
}