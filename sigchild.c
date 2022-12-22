#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<signal.h>
void f1(int sig){
    printf("signal caught\n");

}
int main(){
    int f;
    f=fork();
    signal(SIGCHLD,f1);
    if(f==0){
        printf("inside child\n");
        printf("end of child\n");
    }
    else{
        printf("inside parent\n");
        wait(NULL);
        printf("end parent\n");
    }
}