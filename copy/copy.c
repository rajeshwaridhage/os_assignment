 #include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
 #include<stdlib.h>
 #include<stdio.h>
 #include<unistd.h>
 #define buf_size 11

 int main(int argc,char const *argv[])
{
    int fd_s,fd_d; 
    char buffer[buf_size];
    int in,out;

    fd_s = open("source.text",O_RDONLY,S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);
    if(-1 == fd_s)
    {
        perror("no such files");
        exit(EXIT_FAILURE);
    }
    fd_d = open("destination.text",O_WRONLY|O_CREAT,S_IRUSR |S_IWUSR|S_IRGRP|S_IROTH);
    if(-1 == fd_d)
    {
        perror("error");
        exit(EXIT_FAILURE);
    }
    while((in=read(fd_s,buffer,buf_size))>0)       
   {
      out=write(fd_d,buffer,buf_size);
   }
   close(fd_s);
   close(fd_d);
}