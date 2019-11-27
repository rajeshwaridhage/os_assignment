#include<stdio.h>
#include <unistd.h>
 #include <sys/types.h>

int main(int argc,char const *argv[])
{
    printf("PID: %d\n",getpid());
    printf("PPID: %d\n",getppid());
}
