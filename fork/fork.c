#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc,char const *argv[])
{
    printf("before fork\n");
    fork();
    printf("after fork\n");
    return 0;
}
