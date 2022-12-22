#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    char *file="ls";
    char *arg1="-a";
    char *arg2="-s";
    execlp(file,file,arg1,arg2,NULL);
    return 0;

}