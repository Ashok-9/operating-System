#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<sys/wait.h>
int main()
{
    int p;
    printf("before fork\n");
    p=fork();
    if(p==0)//child
    {
        int i;
        for(i=0;i<10;i++)
        printf("I am first child having id %d\n",getpid());
        
    }
    else//parent
    {
        int q=fork();
            if(q==0)
            {
                printf("I am second child having id %d\n",getpid());
            }
            else
            {
                waitpid(q,NULL,0);
                printf("i am parent");
            }
    }
}