
#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void f1(int sig)
{
	printf("Caught signal %d\n", sig);
}

int main()
{
	signal(SIGINT, f1);
	while (1) {
        
        printf("hello world");
        sleep(1);
        
    }
}
