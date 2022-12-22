#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void f1(){
    printf("at exit function");
}
int main(){
    atexit(f1);
    _exit(0);
}