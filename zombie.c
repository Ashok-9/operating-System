#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{

    int p=fork();
    if(p>0){
        sleep(10);
        printf("Inside parent process\n");
    }
    else if(p==0){
        
        printf("Inside child process\n");
        }

}