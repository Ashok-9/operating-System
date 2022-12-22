#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
    int p;
    p=fork();
    if(p==0){
        char *arg[]={"karthik","kk","hithasri","himasri","lavanya",NULL};
execv("./fact",arg);
    }
    else{
char *arg[]={"karthik","kk","hithasri","himasri","lavanya",NULL};
execv("./prime",arg);
    }
}